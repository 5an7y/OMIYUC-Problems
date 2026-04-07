#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);

    int N, tipo;
    Generator::arguments >> N >> tipo;

    std::vector<int> puntos, tardanza;

    if (tipo == 1) {
        // Nadie tarde > 30
        puntos = Random::rnd(0, 100, N);
        tardanza = Random::rnd(0, 30, N);
    } else if (tipo == 2) {
        // Todos tarde > 30
        puntos = Random::rnd(10, 100, N);
        tardanza = Random::rnd(31, 120, N);
    } else if (tipo == 3) {
        // N = 1, no tarde
        puntos.push_back(Random::rnd(0, 100));
        tardanza.push_back(Random::rnd(0, 30));
    } else if (tipo == 4) {
        // N = 1, tarde
        puntos.push_back(Random::rnd(10, 100));
        tardanza.push_back(Random::rnd(31, 120));
    } else {
        // Mezcla
        puntos = Random::rnd(0, 100, N);
        tardanza = Random::rnd(0, 120, N);
    }

    Generator::case_in << N << '\n';
    for (auto x : puntos) Generator::case_in << x << ' ';
    Generator::case_in << '\n';
    for (auto x : tardanza) Generator::case_in << x << ' ';
    Generator::case_in << '\n';

    return 0;
}
