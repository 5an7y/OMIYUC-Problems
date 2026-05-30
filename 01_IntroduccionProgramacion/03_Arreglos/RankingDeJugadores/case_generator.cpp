#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, tipo;
    Generator::arguments >> n >> tipo;

    // tipo 1: a_i en [1, 10]  (sub 1)
    // tipo 2: a_i en [-10^9, 10^9] random
    // tipo 3: arreglo ordenado ascendente (caso borde)
    // tipo 4: muchos repetidos
    Generator::case_in << n << "\n";
    for (int i = 0; i < n; i++) {
        long long a;
        if (tipo == 1) a = Random::rnd<long long>(1, 10);
        else if (tipo == 3) a = i + 1;
        else if (tipo == 4) a = Random::rnd<long long>(1, 5);
        else a = Random::rnd<long long>(-1000000000LL, 1000000000LL);
        Generator::case_in << a;
        Generator::case_in << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
