#include <bits/stdc++.h>
using namespace std;

// Devuelve true si n es primo (n >= 2 sin divisores propios).
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k;
    string s;
    cin >> k >> s;

    // Si algun digito ya es no-primo (1, 4, 6, 8, 9), basta con quedarse con ese.
    for (char c : s) {
        if (!esPrimo(c - '0')) {
            cout << 1 << "\n";
            return 0;
        }
    }

    // Todos los digitos son primos (2, 3, 5, 7). Busca un par de digitos
    // que al concatenarse formen un numero no primo.
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            int num = (s[i] - '0') * 10 + (s[j] - '0');
            if (!esPrimo(num)) {
                cout << 2 << "\n";
                return 0;
            }
        }
    }

    return 0;
}
