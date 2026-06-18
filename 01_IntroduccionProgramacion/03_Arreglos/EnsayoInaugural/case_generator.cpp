#include <iostream>
#include <vector>
#include <algorithm>
#include "Generator.hpp"
#include "Random.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);

    // Parametros:
    //   n        : numero de series
    //   sumL     : suma total de L_i (longitudes)
    //   cMax     : maximo posible para cada C_i (1 fuerza subtarea 1)
    //   aMax     : maximo identificador A_{i,j}
    //   tipo     : 1 = K aleatorio, 2 = K = 1 (primer episodio),
    //              3 = K = total (ultimo episodio), 4 = K en frontera entre series
    int n, sumL, tipo;
    long long cMax, aMax;
    Generator::arguments >> n >> sumL >> cMax >> aMax >> tipo;

    if (n < 1) n = 1;
    if (sumL < n) sumL = n;

    // Reparte sumL en n series con L_i >= 1.
    vector<int> L(n, 1);
    int restante = sumL - n;
    while (restante > 0) {
        int idx = Random::rnd(0, n - 1);
        int add = Random::rnd(1, max(1, restante / 3));
        if (add > restante) add = restante;
        L[idx] += add;
        restante -= add;
    }

    vector<vector<long long>> A(n);
    for (int i = 0; i < n; i++) {
        A[i].reserve(L[i]);
        for (int j = 0; j < L[i]; j++) {
            A[i].push_back(Random::rnd((long long)1, aMax));
        }
    }

    vector<long long> C(n);
    for (int i = 0; i < n; i++) {
        if (cMax <= 1) C[i] = 1;
        else C[i] = Random::rnd((long long)1, cMax);
    }

    // total = sum(L_i * C_i)
    long long total = 0;
    for (int i = 0; i < n; i++) total += (long long)L[i] * C[i];

    long long k;
    if (tipo == 2) k = 1;
    else if (tipo == 3) k = total;
    else if (tipo == 4) {
        // Frontera entre series: cerca del final de una serie i.
        int corte = (n >= 2) ? Random::rnd(0, n - 2) : 0;
        long long acumulado = 0;
        for (int i = 0; i <= corte; i++) acumulado += (long long)L[i] * C[i];
        k = acumulado - Random::rnd((long long)0, (long long)L[corte] - 1);
        if (k < 1) k = 1;
    } else {
        k = Random::rnd((long long)1, total);
    }

    Generator::case_in << n << " " << k << "\n";
    for (int i = 0; i < n; i++) {
        Generator::case_in << C[i];
        Generator::case_in << (i + 1 == n ? '\n' : ' ');
    }
    for (int i = 0; i < n; i++) {
        Generator::case_in << L[i];
        for (int j = 0; j < L[i]; j++) Generator::case_in << " " << A[i][j];
        Generator::case_in << "\n";
    }

    return 0;
}
