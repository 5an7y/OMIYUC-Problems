#include <iostream>
#include <vector>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, tipo;
    Generator::arguments >> n >> tipo;

    // tipo 1: random con ~20% ceros
    // tipo 2: un solo cero (en posicion random)
    // tipo 3: muchos ceros (~50%)
    std::vector<long long> a(n);
    if (tipo == 2) {
        for (int i = 0; i < n; i++) {
            long long v;
            do {
                v = Random::rnd<long long>(-1000000000LL, 1000000000LL);
            } while (v == 0);
            a[i] = v;
        }
        a[Random::rnd<int>(0, n - 1)] = 0;
    } else {
        int probCero = (tipo == 3) ? 2 : 5;
        for (int i = 0; i < n; i++) {
            if (Random::rnd<int>(0, probCero - 1) == 0) {
                a[i] = 0;
            } else {
                long long v;
                do {
                    v = Random::rnd<long long>(-1000000000LL, 1000000000LL);
                } while (v == 0);
                a[i] = v;
            }
        }
        // garantizar al menos un cero
        bool tieneCero = false;
        for (int i = 0; i < n; i++) if (a[i] == 0) { tieneCero = true; break; }
        if (!tieneCero) a[Random::rnd<int>(0, n - 1)] = 0;
    }

    Generator::case_in << n << "\n";
    for (int i = 0; i < n; i++) {
        Generator::case_in << a[i];
        Generator::case_in << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
