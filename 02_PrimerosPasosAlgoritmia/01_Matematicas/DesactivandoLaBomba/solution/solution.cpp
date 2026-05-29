#include <bits/stdc++.h>
using namespace std;

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

    // Caso 1: hay un digito no primo (1, 4, 6, 8 o 9).
    for (char c : s) {
        if (!esPrimo(c - '0')) {
            cout << 1 << "\n" << c << "\n";
            return 0;
        }
    }

    // Caso 2: todos primos. Busca par de digitos (manteniendo orden)
    // que formen un numero no primo.
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            int num = (s[i] - '0') * 10 + (s[j] - '0');
            if (!esPrimo(num)) {
                cout << 2 << "\n" << s[i] << s[j] << "\n";
                return 0;
            }
        }
    }

    return 0;
}
