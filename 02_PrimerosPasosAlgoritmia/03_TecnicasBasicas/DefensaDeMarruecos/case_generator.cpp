#include <iostream>
#include <vector>
#include <algorithm>
#include "Generator.hpp"
#include "Random.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);

    // Parametros:
    //   n, m   : tamanos de tortillas y guisados
    //   vMax   : maximo peso
    //   tipo   : 1 = aleatorio,
    //            2 = todos los guisados muy pesados (respuesta = 0),
    //            3 = todos los guisados muy ligeros (respuesta = min(N,M)),
    //            4 = pesos iguales o muy cercanos en ambos arreglos,
    //            5 = caso borde (n == 1 o m == 1)
    int n, m, tipo;
    long long vMax;
    Generator::arguments >> n >> m >> vMax >> tipo;

    if (n < 1) n = 1;
    if (m < 1) m = 1;

    vector<long long> A(n), B(m);

    if (tipo == 2) {
        for (int i = 0; i < n; i++) A[i] = Random::rnd((long long)1, vMax / 4 + 1);
        for (int j = 0; j < m; j++) B[j] = Random::rnd(vMax / 2 + 2, vMax);
    } else if (tipo == 3) {
        for (int i = 0; i < n; i++) A[i] = Random::rnd(vMax / 2 + 1, vMax);
        for (int j = 0; j < m; j++) B[j] = Random::rnd((long long)1, vMax / 4 + 1);
    } else if (tipo == 4) {
        long long c = Random::rnd((long long)2, vMax);
        for (int i = 0; i < n; i++) {
            long long d = Random::rnd((long long)-2, (long long)2);
            A[i] = max((long long)1, c + d);
        }
        for (int j = 0; j < m; j++) {
            long long d = Random::rnd((long long)-2, (long long)2);
            B[j] = max((long long)1, c + d);
        }
    } else {
        for (int i = 0; i < n; i++) A[i] = Random::rnd((long long)1, vMax);
        for (int j = 0; j < m; j++) B[j] = Random::rnd((long long)1, vMax);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    Generator::case_in << n << " " << m << "\n";
    for (int i = 0; i < n; i++) {
        Generator::case_in << A[i];
        Generator::case_in << (i + 1 == n ? '\n' : ' ');
    }
    for (int j = 0; j < m; j++) {
        Generator::case_in << B[j];
        Generator::case_in << (j + 1 == m ? '\n' : ' ');
    }

    return 0;
}
