#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

typedef long long ll;

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int tipo;
    ll maxVal;
    Generator::arguments >> tipo >> maxVal;

    // tipo 1: random general en [1, maxVal]
    // tipo 2: d pequeno (1..10) y r grande -> mata brute force que itera multiplos
    // tipo 3: d < l (respuesta = d, caso facil)
    // tipo 4: d = 1 con r en el limite (mata brute force especificamente)
    // tipo 5: l = r (intervalo de un solo punto)
    ll l, r, d;
    if (tipo == 2) {
        d = Random::rnd<ll>(1, 10);
        r = maxVal - Random::rnd<ll>(0, maxVal / 10);
        l = Random::rnd<ll>(1, r);
    } else if (tipo == 3) {
        l = Random::rnd<ll>(2, maxVal);
        r = Random::rnd<ll>(l, maxVal);
        d = Random::rnd<ll>(1, l - 1);
    } else if (tipo == 4) {
        d = 1;
        r = maxVal;
        l = 1;
    } else if (tipo == 5) {
        l = Random::rnd<ll>(1, maxVal);
        r = l;
        d = Random::rnd<ll>(1, maxVal);
    } else {
        l = Random::rnd<ll>(1, maxVal);
        r = Random::rnd<ll>(l, maxVal);
        d = Random::rnd<ll>(1, maxVal);
    }

    Generator::case_in << l << " " << r << " " << d << "\n";
    return 0;
}
