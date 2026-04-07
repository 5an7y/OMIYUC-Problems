#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);

    int N, tipo;
    Generator::arguments >> N >> tipo;

    std::vector<int> folios;

    if (tipo == 1) {
        // Ninguno duplicado: N valores distintos
        std::vector<int> pool;
        for (int i = 1; i <= 1000; i++) pool.push_back(i);
        std::random_shuffle(pool.begin(), pool.end());
        for (int i = 0; i < N; i++) folios.push_back(pool[i]);
    } else if (tipo == 2) {
        // Todos iguales
        int val = Random::rnd(1, 1000);
        for (int i = 0; i < N; i++) folios.push_back(val);
    } else if (tipo == 3) {
        // Duplicado al inicio
        int dup = Random::rnd(1, 500);
        folios.push_back(dup);
        folios.push_back(dup);
        auto rest = Random::rnd(501, 1000, N - 2);
        for (auto x : rest) folios.push_back(x);
    } else if (tipo == 4) {
        // Duplicado al final
        auto rest = Random::rnd(1, 500, N - 2);
        for (auto x : rest) folios.push_back(x);
        int dup = Random::rnd(501, 1000);
        folios.push_back(dup);
        folios.push_back(dup);
    } else {
        // Aleatorio con algunos duplicados (rango pequeño para forzar repeticiones)
        folios = Random::rnd(1, N / 2 + 1, N);
    }

    Generator::case_in << N << '\n';
    for (auto x : folios) Generator::case_in << x << ' ';
    Generator::case_in << '\n';

    return 0;
}
