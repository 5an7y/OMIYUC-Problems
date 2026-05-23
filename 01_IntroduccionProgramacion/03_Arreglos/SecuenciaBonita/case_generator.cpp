#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);

    int N, tipo;
    Generator::arguments >> N >> tipo;

    std::vector<long long> a(N + 1);

    if (tipo == 1) {
        // Todos a[i] > i  =>  respuesta NO
        for (int i = 1; i <= N; i++)
            a[i] = Random::rnd<long long>(i + 1, 1000000000LL);

    } else if (tipo == 2) {
        // Un a[j] = j exacto, el resto > i  =>  respuesta SI (buena)
        int j = Random::rnd(1, N);
        for (int i = 1; i <= N; i++)
            a[i] = (i == j) ? (long long)i : Random::rnd<long long>(i + 1, 1000000000LL);

    } else {
        // tipo == 3: un a[j] < j, el resto > i (ningun a[i]=i)  =>  SI bonita, NO buena
        int j = (N >= 2) ? Random::rnd(2, N) : 2;
        for (int i = 1; i <= N; i++) {
            if (i == j)
                a[i] = Random::rnd<long long>(1, j - 1);
            else
                a[i] = Random::rnd<long long>(i + 1, 1000000000LL);
        }
    }

    Generator::case_in << N << "\n";
    for (int i = 1; i <= N; i++) {
        if (i > 1) Generator::case_in << " ";
        Generator::case_in << a[i];
    }
    Generator::case_in << "\n";

    return 0;
}
