#include <iostream>
#include <string>
#include <algorithm>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, tipo;
    Generator::arguments >> n >> tipo;

    // tipo 1: alternante
    // tipo 2: todos iguales
    // tipo 3: random uniforme (cada caracter 50/50)
    // tipo 4: balanceado (mitad y mitad, mezclado)
    std::string s(n, '?');
    if (tipo == 1) {
        char start = (Random::rnd<int>(0, 1) == 0) ? '(' : ')';
        char other = (start == '(') ? ')' : '(';
        for (int i = 0; i < n; i++) s[i] = (i % 2 == 0) ? start : other;
    } else if (tipo == 2) {
        char c = (Random::rnd<int>(0, 1) == 0) ? '(' : ')';
        for (int i = 0; i < n; i++) s[i] = c;
    } else if (tipo == 3) {
        for (int i = 0; i < n; i++) s[i] = (Random::rnd<int>(0, 1) == 0) ? '(' : ')';
    } else {
        int abre = n / 2;
        for (int i = 0; i < n; i++) s[i] = (i < abre) ? '(' : ')';
        for (int i = n - 1; i > 0; i--) {
            int j = Random::rnd<int>(0, i);
            std::swap(s[i], s[j]);
        }
    }

    Generator::case_in << n << "\n" << s << "\n";
    return 0;
}
