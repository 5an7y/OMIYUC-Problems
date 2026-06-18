#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);

    // Parametros:
    //   n      : tamano del grid (NxN)
    //   vMax   : maximo valor por celda (1 fuerza la subtarea facil)
    //   tipo   : 1 = aleatorio,
    //            2 = ceros en la antidiagonal (min antidiag = 0),
    //            3 = antidiagonal con valores grandes (min antidiag = vMax),
    //            4 = grid uniforme (mismo valor en todas las celdas),
    //            5 = sparse (mayoria 0s, picos altos en algunas)
    int n, tipo;
    long long vMax;
    Generator::arguments >> n >> vMax >> tipo;

    if (n < 2) n = 2;

    Generator::case_in << n << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            long long v;
            if (tipo == 4) {
                v = vMax;
            } else if (tipo == 2 && i + j == n + 1) {
                v = 0;
            } else if (tipo == 3 && i + j == n + 1) {
                v = vMax;
            } else if (tipo == 5) {
                v = (Random::rnd(0, 9) == 0) ? Random::rnd((long long)0, vMax) : 0;
            } else {
                v = Random::rnd((long long)0, vMax);
            }
            Generator::case_in << v;
            Generator::case_in << (j == n ? '\n' : ' ');
        }
    }

    return 0;
}
