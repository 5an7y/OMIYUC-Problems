#include <iostream>
#include <vector>
#include <algorithm>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, tipo;
    Generator::arguments >> n >> tipo;

    std::vector<long long> a(n);
    // tipo 1: fila ya ordenada (no-decreciente)
    // tipo 2: fila NO ordenada (al menos un descenso)
    if (tipo == 1) {
        for (int i = 0; i < n; i++) a[i] = Random::rnd<long long>(1, 1000000000LL);
        std::sort(a.begin(), a.end());
    } else {
        for (int i = 0; i < n; i++) a[i] = Random::rnd<long long>(1, 1000000000LL);
        // Garantizar desorden: si quedó ordenada, forzar un descenso.
        bool ordenada = true;
        for (int i = 1; i < n; i++) if (a[i] < a[i - 1]) { ordenada = false; break; }
        if (ordenada) {
            a[0] = 1000000000LL;
            a[n - 1] = 1;
        }
    }

    Generator::case_in << n << "\n";
    for (int i = 0; i < n; i++) {
        Generator::case_in << a[i];
        Generator::case_in << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
