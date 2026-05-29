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

    // tipo 1: un solo digito no primo  (K = 1 sirve aqui)
    // tipo 2: solo digitos primos {2,3,5,7} (forzar respuesta = 2)
    // tipo 3: cualquier digito 1-9 (mezcla natural)
    std::string pool;
    if (tipo == 1) pool = "146789";
    else if (tipo == 2) pool = "2357";
    else pool = "123456789";

    std::string s;
    do {
        s.clear();
        for (int i = 0; i < k; i++) {
            s += pool[Random::rnd<int>(0, (int)pool.size() - 1)];
        }
    } while (!tieneSolucion(s));

    Generator::case_in << k << "\n" << s << "\n";
    return 0;
}
