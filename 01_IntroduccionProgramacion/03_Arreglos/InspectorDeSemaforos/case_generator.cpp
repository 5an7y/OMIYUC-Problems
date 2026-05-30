#include <iostream>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int tipo;
    Generator::arguments >> tipo;

    int l[4], s[4], r[4], p[4];
    for (int i = 0; i < 4; i++) {
        l[i] = Random::rnd<int>(0, 1);
        s[i] = Random::rnd<int>(0, 1);
        r[i] = Random::rnd<int>(0, 1);
        p[i] = 0;
    }

    if (tipo == 1) {
        // A lo mas un p_i en verde (puede ser ninguno).
        int cuantos = Random::rnd<int>(0, 1);
        if (cuantos == 1) {
            int idx = Random::rnd<int>(0, 3);
            p[idx] = 1;
        }
    } else {
        // Cualquier configuracion para p_i.
        for (int i = 0; i < 4; i++) p[i] = Random::rnd<int>(0, 1);
    }

    for (int i = 0; i < 4; i++) {
        Generator::case_in << l[i] << " " << s[i] << " " << r[i] << " " << p[i] << "\n";
    }
    return 0;
}
