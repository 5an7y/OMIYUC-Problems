#include <bits/stdc++.h>
using namespace std;

// Cuenta cuantas veces aparece la letra `letra` en la cadena `s`.
int contar(const string &s, char letra) {
    int c = 0;
    for (char x : s) if (x == letra) c++;
    return c;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;

    int completados = 0;
    for (int i = 0; i < 26; i++) {
        char letra = 'A' + i;
        int requerido = i + 1;
        if (contar(s, letra) >= requerido) completados++;
    }
    cout << completados << "\n";
    return 0;
}
