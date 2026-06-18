#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);

    // Parametros:
    //   n     : tamano (1 <= n <= 3e5)
    //   tipo  : 1 = k = n (minimo alcanzable),
    //           2 = k aleatorio en [n, floor(1.5n) - 1] (sub facil),
    //           3 = k = floor(1.5n) - 1 (limite alto de sub facil),
    //           4 = k aleatorio en [ceil(1.5n), 2n - 1] (sub general),
    //           5 = k = 2n - 1 (maximo alcanzable),
    //           6 = k = n - 1 (NO, k < n),
    //           7 = k = 2n (NO, k > 2n - 1),
    //           8 = k muy grande (k = 10^6, casi siempre NO).
    int n, tipo;
    Generator::arguments >> n >> tipo;
    if (n < 1) n = 1;

    long long k;
    if (tipo == 1) k = n;
    else if (tipo == 2) {
        long long lo = n, hi = (3LL * n) / 2 - 1;
        if (hi < lo) hi = lo;
        k = Random::rnd(lo, hi);
    }
    else if (tipo == 3) {
        k = (3LL * n) / 2 - 1;
        if (k < n) k = n;
    }
    else if (tipo == 4) {
        long long lo = (3LL * n + 1) / 2, hi = 2LL * n - 1;
        if (hi < lo) hi = lo;
        k = Random::rnd(lo, hi);
    }
    else if (tipo == 5) k = 2LL * n - 1;
    else if (tipo == 6) k = max(1LL, (long long)n - 1);
    else if (tipo == 7) k = 2LL * n;
    else k = 1000000;

    if (k < 1) k = 1;
    if (k > 1000000) k = 1000000;

    Generator::case_in << n << " " << k << "\n";

    return 0;
}
