#include <iostream>
#include <vector>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, tipo, v;
    Generator::arguments >> n >> tipo >> v;

    std::vector<int> a(n);
    if (tipo == 1) {
        // todos iguales a v
        for (int i = 0; i < n; i++) a[i] = v;
    } else {
        // random uniforme 1..100
        for (int i = 0; i < n; i++) a[i] = Random::rnd<int>(1, 100);
    }

    Generator::case_in << n << "\n";
    for (int i = 0; i < n; i++) {
        Generator::case_in << a[i];
        Generator::case_in << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
