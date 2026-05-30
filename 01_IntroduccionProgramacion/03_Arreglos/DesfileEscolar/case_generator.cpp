#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, tipo;
    Generator::arguments >> n >> tipo;

    // tipo 1: cada columna tiene l_i = 0 o r_i = 0 (pero no ambos)
    // tipo 2: random general (l_i, r_i en [0, 500])
    Generator::case_in << n << "\n";
    for (int i = 0; i < n; i++) {
        int l, r;
        if (tipo == 1) {
            // toda la columna marcha con el mismo pie
            if (Random::rnd<int>(0, 1) == 0) {
                l = Random::rnd<int>(1, 500);
                r = 0;
            } else {
                l = 0;
                r = Random::rnd<int>(1, 500);
            }
        } else {
            l = Random::rnd<int>(0, 500);
            r = Random::rnd<int>(0, 500);
        }
        Generator::case_in << l << " " << r << "\n";
    }
    return 0;
}
