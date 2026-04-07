#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);

    int N, MAX_P, tipo;
    Generator::arguments >> N >> MAX_P >> tipo;

    std::vector<int> pts;

    if (tipo == 1) {
        // Aleatorio general
        pts = Random::rnd(0, MAX_P, N);
    } else if (tipo == 2) {
        // Todos iguales (todos clasifican)
        int val = Random::rnd(1, MAX_P);
        for (int i = 0; i < N; i++) pts.push_back(val);
    } else if (tipo == 3) {
        // Solo uno clasifica (el primero)
        int top = MAX_P;
        pts.push_back(top);
        auto rest = Random::rnd(0, top - 1, N - 1);
        for (auto x : rest) pts.push_back(x);
    } else if (tipo == 4) {
        // N = 1
        pts.push_back(Random::rnd(0, MAX_P));
    } else {
        // Empate entre dos valores altos
        int top = MAX_P;
        for (int i = 0; i < N / 2; i++) pts.push_back(top);
        auto rest = Random::rnd(0, top - 1, N - N / 2);
        for (auto x : rest) pts.push_back(x);
        std::random_shuffle(pts.begin(), pts.end());
    }

    Generator::case_in << N << '\n';
    for (auto x : pts) Generator::case_in << x << ' ';
    Generator::case_in << '\n';

    return 0;
}
