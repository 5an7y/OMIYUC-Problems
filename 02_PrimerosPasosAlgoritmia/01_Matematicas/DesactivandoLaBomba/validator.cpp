#include <bits/stdc++.h>
using namespace std;

namespace Validator {
    std::ifstream case_in, case_out;
    void init_validator() {
        std::string case_in_name("data.in"), case_out_name("data.out");
        case_in.open(case_in_name.c_str());
        case_out.open(case_out_name.c_str());
        if (!case_in) {
            throw std::runtime_error("Error al abrir " + case_in_name + "\n");
            exit(EXIT_FAILURE);
        }
        if (!case_out) {
            throw std::runtime_error("Error al abrir " + case_out_name + "\n");
            exit(EXIT_FAILURE);
        }
        return;
    }
}

static bool esPrimo(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    Validator::init_validator();

    // Lee el input original: K y la cadena n.
    int kIn;
    string nOrig;
    Validator::case_in >> kIn >> nOrig;

    // Lee la solucion de referencia: kEsperado (el minimo correcto).
    int kEsperado;
    string sRef;
    Validator::case_out >> kEsperado >> sRef;

    // Lee la salida del usuario.
    int kUser;
    string sUser;
    if (!(cin >> kUser >> sUser)) {
        cout << 0 << "\n";
        return 0;
    }

    // 1. kUser debe coincidir con el minimo esperado.
    if (kUser != kEsperado) {
        cout << 0 << "\n";
        return 0;
    }

    // 2. La cadena del usuario debe tener exactamente kUser caracteres.
    if ((int)sUser.size() != kUser) {
        cout << 0 << "\n";
        return 0;
    }

    // 3. Todos los caracteres deben ser digitos del 1 al 9.
    for (char c : sUser) {
        if (c < '1' || c > '9') {
            cout << 0 << "\n";
            return 0;
        }
    }

    // 4. sUser debe ser subsecuencia de nOrig (mismo orden).
    int j = 0;
    for (char c : nOrig) {
        if (j < (int)sUser.size() && sUser[j] == c) j++;
    }
    if (j != (int)sUser.size()) {
        cout << 0 << "\n";
        return 0;
    }

    // 5. El numero formado por sUser debe NO ser primo.
    long long num = 0;
    for (char c : sUser) num = num * 10 + (c - '0');
    if (esPrimo(num)) {
        cout << 0 << "\n";
        return 0;
    }

    cout << 1 << "\n";
    return 0;
}
