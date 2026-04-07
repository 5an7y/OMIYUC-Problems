#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);

    int N, tipo;
    Generator::arguments >> N >> tipo;

    std::vector<int> r1, r2;

    if (tipo == 1) {
        // Todos iguales (nadie supera el promedio)
        int val = Random::rnd(0, 100);
        for (int i = 0; i < N; i++) { r1.push_back(val); r2.push_back(val); }
    } else if (tipo == 2) {
        // N = 1 (el único siempre es igual al promedio, salida vacía)
        r1.push_back(Random::rnd(0, 100));
        r2.push_back(Random::rnd(0, 100));
    } else if (tipo == 3) {
        // Uno claramente arriba
        r1 = Random::rnd(0, 50, N);
        r2 = Random::rnd(0, 50, N);
        r1[0] = 100;
        r2[0] = 100;
    } else if (tipo == 4) {
        // Varios superan el promedio
        r1 = Random::rnd(70, 100, N);
        r2 = Random::rnd(70, 100, N);
        // Bajar algunos
        for (int i = N / 2; i < N; i++) { r1[i] = Random::rnd(0, 30); r2[i] = Random::rnd(0, 30); }
    } else {
        // Aleatorio general
        r1 = Random::rnd(0, 100, N);
        r2 = Random::rnd(0, 100, N);
    }

    Generator::case_in << N << '\n';
    for (auto x : r1) Generator::case_in << x << ' ';
    Generator::case_in << '\n';
    for (auto x : r2) Generator::case_in << x << ' ';
    Generator::case_in << '\n';

    return 0;
}
