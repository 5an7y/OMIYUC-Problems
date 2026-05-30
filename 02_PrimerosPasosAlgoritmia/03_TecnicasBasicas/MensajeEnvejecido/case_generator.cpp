#include <iostream>
#include <string>
#include "Generator.hpp"
#include "Random.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, tipo;
    Generator::arguments >> n >> tipo;

    // tipo 1: random uniforme con prob 1/3 para cada carácter
    // tipo 2: garantizar YES — generar A construible y luego sustituir algunas letras por '?'
    // tipo 3: random sin '?' (X solo a/b)
    std::string s(n, '?');
    if (tipo == 2) {
        // Construir A simulando el proceso.
        int L = 0, R = 0;
        std::string A(n, '?');
        for (int i = 0; i < n; i++) {
            // letra "frente" = T_{L+1} = 'a' si (L+1) impar else 'b'
            // letra "atras"  = T_{n-R} = 'a' si (n-R) impar else 'b'
            char frente = ((L + 1) % 2 == 1) ? 'a' : 'b';
            char atras  = ((n - R) % 2 == 1) ? 'a' : 'b';
            char opciones[2] = {frente, atras};
            int idx = Random::rnd<int>(0, 1);
            A[i] = opciones[idx];
            if (idx == 0) L++; else R++;
        }
        // Cubrir aprox 30% con '?'
        for (int i = 0; i < n; i++) {
            if (Random::rnd<int>(0, 9) < 3) s[i] = '?';
            else s[i] = A[i];
        }
    } else if (tipo == 3) {
        for (int i = 0; i < n; i++) {
            s[i] = (Random::rnd<int>(0, 1) == 0) ? 'a' : 'b';
        }
    } else {
        for (int i = 0; i < n; i++) {
            int r = Random::rnd<int>(0, 2);
            s[i] = (r == 0) ? 'a' : (r == 1) ? 'b' : '?';
        }
    }

    Generator::case_in << n << "\n" << s << "\n";
    return 0;
}
