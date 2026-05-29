#include <iostream>
#include <vector>
#include <algorithm>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, tipo;
    Generator::arguments >> n >> tipo;

    // tipo 1: permutacion random
    // tipo 2: identidad p_i = i  (respuesta = n)
    // tipo 3: reversa p_i = n+1-i (respuesta = floor(n/2) + (n%2))
    std::vector<int> p(n);
    for (int i = 0; i < n; i++) p[i] = i + 1;

    if (tipo == 1) {
        for (int i = n - 1; i > 0; i--) {
            int j = Random::rnd<int>(0, i);
            std::swap(p[i], p[j]);
        }
    } else if (tipo == 3) {
        for (int i = 0; i < n; i++) p[i] = n - i;
    }
    // tipo 2: ya esta identidad

    Generator::case_in << n << "\n";
    for (int i = 0; i < n; i++) {
        Generator::case_in << p[i];
        Generator::case_in << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
