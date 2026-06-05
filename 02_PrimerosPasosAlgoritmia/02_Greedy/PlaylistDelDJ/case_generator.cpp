#include <iostream>
#include <vector>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, m, tipo;
    Generator::arguments >> n >> m >> tipo;

    // tipo 1: cada b_i aleatorio en [1, m]
    // tipo 2: mezcla con algunos b_i grandes fuera de [1, m]
    // tipo 3: todos los b_i = 1 (caso degenerado)
    // tipo 4: b_i todos iguales a un valor grande fuera de [1, m]
    std::vector<long long> b(n);
    if (tipo == 1) {
        for (int i = 0; i < n; i++) b[i] = Random::rnd<int>(1, m);
    } else if (tipo == 2) {
        for (int i = 0; i < n; i++) {
            if (Random::rnd<int>(0, 2) == 0) {
                b[i] = Random::rnd<long long>(1, 1000000000LL);
            } else {
                b[i] = Random::rnd<int>(1, m);
            }
        }
    } else if (tipo == 3) {
        for (int i = 0; i < n; i++) b[i] = 1;
    } else {
        long long v = Random::rnd<long long>((long long)m + 1, 1000000000LL);
        for (int i = 0; i < n; i++) b[i] = v;
    }

    Generator::case_in << n << " " << m << "\n";
    for (int i = 0; i < n; i++) {
        Generator::case_in << b[i];
        Generator::case_in << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
