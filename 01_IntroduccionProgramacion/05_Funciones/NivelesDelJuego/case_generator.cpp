#include <iostream>
#include <string>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, tipo;
    Generator::arguments >> n >> tipo;

    // tipo 1: solo letras A-D (4 letras)
    // tipo 2: cualquier letra A-Z
    // tipo 3: solo una letra (random) repetida n veces
    int rangoMax;
    if (tipo == 1) rangoMax = 3;       // A..D
    else if (tipo == 2) rangoMax = 25; // A..Z
    else rangoMax = 0;                  // se ajusta abajo

    std::string s(n, '?');
    if (tipo == 3) {
        char letra = 'A' + Random::rnd<int>(0, 25);
        for (int i = 0; i < n; i++) s[i] = letra;
    } else {
        for (int i = 0; i < n; i++) {
            s[i] = 'A' + Random::rnd<int>(0, rangoMax);
        }
    }

    Generator::case_in << n << "\n" << s << "\n";
    return 0;
}
