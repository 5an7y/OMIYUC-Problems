#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, tipo;
    Generator::arguments >> n >> tipo;

    // tipo 1: todos los a_i = 1
    // tipo 2: cualquier valor en [1, 100]
    // tipo 3: todos pares (forzar respuesta = 0)
    Generator::case_in << n << "\n";
    for (int i = 0; i < n; i++) {
        int a;
        if (tipo == 1) a = 1;
        else if (tipo == 3) a = Random::rnd<int>(1, 50) * 2; // par en [2, 100]
        else a = Random::rnd<int>(1, 100);
        Generator::case_in << a;
        Generator::case_in << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
