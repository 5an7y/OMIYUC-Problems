#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n;
    long long maxAbs;
    Generator::arguments >> n >> maxAbs;

    // Genera un arreglo aleatorio con a_i en [-maxAbs, maxAbs].
    Generator::case_in << n << "\n";
    for (int i = 0; i < n; i++) {
        long long a = Random::rnd<long long>(-maxAbs, maxAbs);
        Generator::case_in << a;
        Generator::case_in << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
