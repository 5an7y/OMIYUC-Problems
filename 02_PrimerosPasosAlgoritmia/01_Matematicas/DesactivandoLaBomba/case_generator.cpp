#include <iostream>
#include <string>
#include "Generator.hpp"
#include "Random.hpp"

static bool esPrimoG(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}

static bool tieneSolucion(const std::string &s) {
    for (char c : s) if (!esPrimoG(c - '0')) return true;
    int k = (int)s.size();
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            int num = (s[i] - '0') * 10 + (s[j] - '0');
            if (!esPrimoG(num)) return true;
        }
    }
    return false;
}

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int k, tipo;
    Generator::arguments >> k >> tipo;

    // === SUBTAREA 1 ===
    // tipo 1: K = 1 y el unico digito NO es primo (uno de {1, 4, 6, 8, 9})
    // tipo 2: K >= 2, digitos 1-9 aleatorios, ultimo = 5
    // tipo 3: K >= 2, digitos primos {2,3,5,7} aleatorios, ultimo = 5
    // tipo 4: K >= 2, digitos solo {3, 7}, ultimo = 5
    //
    // === SUBTAREA 2 ===
    // tipo 5: digitos primos {2,3,5,7} aleatorios (sin restricciones)
    // tipo 6: cualquier digito 1-9
    // tipo 7: K >= 2, primer digito de {2,3,5,7}, resto solo 3s y 7s
    std::string s;
    if (tipo == 1) {
        const std::string pool = "146789";
        s += pool[Random::rnd<int>(0, (int)pool.size() - 1)];
    } else if (tipo == 2) {
        for (int i = 0; i < k - 1; i++) {
            s += (char)('1' + Random::rnd<int>(0, 8));
        }
        s += '5';
    } else if (tipo == 3) {
        const std::string pool = "2357";
        for (int i = 0; i < k - 1; i++) {
            s += pool[Random::rnd<int>(0, (int)pool.size() - 1)];
        }
        s += '5';
    } else if (tipo == 4) {
        for (int i = 0; i < k - 1; i++) {
            s += (Random::rnd<int>(0, 1) == 0) ? '3' : '7';
        }
        s += '5';
    } else if (tipo == 7) {
        const std::string primer = "2357";
        s += primer[Random::rnd<int>(0, 3)];
        for (int i = 1; i < k; i++) {
            s += (Random::rnd<int>(0, 1) == 0) ? '3' : '7';
        }
    } else {
        // tipos 5 y 6: random con un pool, reintentar hasta tener solucion.
        std::string pool = (tipo == 5) ? "2357" : "123456789";
        do {
            s.clear();
            for (int i = 0; i < k; i++) {
                s += pool[Random::rnd<int>(0, (int)pool.size() - 1)];
            }
        } while (!tieneSolucion(s));
    }

    Generator::case_in << k << "\n" << s << "\n";
    return 0;
}
