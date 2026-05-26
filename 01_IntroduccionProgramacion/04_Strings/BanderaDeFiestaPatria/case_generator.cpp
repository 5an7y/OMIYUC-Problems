#include <iostream>
#include <string>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, tipo;
    Generator::arguments >> n >> tipo;

    // tipo 1: alternante
    // tipo 2: todos iguales
    // tipo 3: random uniforme
    std::string s(n, '?');
    if (tipo == 1) {
        char start = (Random::rnd<int>(0, 1) == 0) ? 'B' : 'V';
        char other = (start == 'B') ? 'V' : 'B';
        for (int i = 0; i < n; i++) s[i] = (i % 2 == 0) ? start : other;
    } else if (tipo == 2) {
        char c = (Random::rnd<int>(0, 1) == 0) ? 'B' : 'V';
        for (int i = 0; i < n; i++) s[i] = c;
    } else {
        for (int i = 0; i < n; i++) s[i] = (Random::rnd<int>(0, 1) == 0) ? 'B' : 'V';
    }

    Generator::case_in << n << "\n" << s << "\n";
    return 0;
}
