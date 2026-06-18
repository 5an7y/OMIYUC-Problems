#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);

    // Parametros:
    //   n      : tamano del grid (NxN)
    //   vMax   : maximo valor por celda (1 fuerza la subtarea facil)
    //   tipo   : 1 = aleatorio puro,
    //            2 = "trampa fuerte": min antidiag plantada en posicion
    //                aleatoria NO trivial (no esquinas, no centro). Resto de
    //                antidiag con valores altos. Fuera de antidiag con valores
    //                bajos (< min antidiag). Asegura que heuristicas como
    //                "salta el minimo global", "salta el centro" o "salta una
    //                esquina" fallen.
    //            3 = antidiag toda igual a vMax (cualquier celda de antidiag
    //                vale como skip).
    //            4 = todas las celdas valen vMax (uniforme).
    int n, tipo;
    long long vMax;
    Generator::arguments >> n >> vMax >> tipo;

    if (n < 2) n = 2;

    auto enAntiDiag = [&](int i, int j) { return i + j == n + 1; };

    // posMinAntiDiag: el indice 1..n de la celda de la antidiag donde queremos
    // plantar el minimo. Para tipo 2: aleatorio, no esquinas, no centro.
    int posMin = 1;
    if (tipo == 2) {
        if (n <= 3) {
            // n <= 3 no permite evitar a la vez esquinas y centro.
            posMin = (n == 2) ? Random::rnd(1, 2) : 2;
        } else {
            int lo = 2, hi = n - 1;
            int center = (n + 1) / 2;
            do {
                posMin = Random::rnd(lo, hi);
            } while (n % 2 == 1 && posMin == center);
        }
    }

    long long minAntiVal = vMax / 3;       // el valor "minimo" plantado en antidiag
    long long otherAntiLo = vMax / 2 + 1;  // resto antidiag mas alto que minAntiVal
    long long outsideHi = vMax / 4;        // fuera de antidiag aun mas bajo

    Generator::case_in << n << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            long long v;
            bool anti = enAntiDiag(i, j);
            if (tipo == 4) {
                v = vMax;
            } else if (tipo == 3 && anti) {
                v = vMax;
            } else if (tipo == 3) {
                v = Random::rnd((long long)0, vMax);
            } else if ((tipo == 2) && anti) {
                if (i == posMin) v = minAntiVal;
                else             v = Random::rnd(otherAntiLo, vMax);
            } else if (tipo == 2) {
                v = Random::rnd((long long)0, outsideHi);
            } else {
                v = Random::rnd((long long)0, vMax);
            }
            Generator::case_in << v;
            Generator::case_in << (j == n ? '\n' : ' ');
        }
    }

    return 0;
}
