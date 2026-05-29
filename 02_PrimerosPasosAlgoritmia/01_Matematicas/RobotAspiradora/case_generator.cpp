#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

typedef long long ll;

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int tipo;
    ll maxN;
    Generator::arguments >> tipo >> maxN;

    // tipo 1: n,m random en [1, maxN]
    // tipo 2: n = 1 (caso borde fila degenerada)
    // tipo 3: m = 1 (caso borde columna degenerada)
    // tipo 4: rb == rd (limpia en t=0 por fila)
    // tipo 5: cb == cd (limpia en t=0 por columna)
    ll n, m, rb, cb, rd, cd;
    if (tipo == 2) {
        n = 1;
        m = Random::rnd<ll>(1, maxN);
    } else if (tipo == 3) {
        n = Random::rnd<ll>(1, maxN);
        m = 1;
    } else {
        n = Random::rnd<ll>(1, maxN);
        m = Random::rnd<ll>(1, maxN);
    }
    rb = Random::rnd<ll>(1, n);
    cb = Random::rnd<ll>(1, m);
    if (tipo == 4) { rd = rb; cd = Random::rnd<ll>(1, m); }
    else if (tipo == 5) { rd = Random::rnd<ll>(1, n); cd = cb; }
    else { rd = Random::rnd<ll>(1, n); cd = Random::rnd<ll>(1, m); }

    Generator::case_in << n << " " << m << " " << rb << " " << cb
                       << " " << rd << " " << cd << "\n";
    return 0;
}
