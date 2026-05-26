#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;

    // Para cada uno de los 2 patrones alternantes (empezando con B o con V),
    // marcamos las posiciones donde s difiere del patron. La operacion puede
    // arreglar las diferencias si y solo si forman un intervalo contiguo
    // (sin huecos de posiciones donde s ya coincide con el patron).
    auto canMake = [&](char patStart) -> bool {
        char other = (patStart == 'B') ? 'V' : 'B';
        int L = -1, R = -1;
        for (int i = 0; i < n; i++) {
            char t = (i % 2 == 0) ? patStart : other;
            if (s[i] != t) {
                if (L == -1) L = i;
                R = i;
            }
        }
        if (L == -1) return true;
        for (int i = L; i <= R; i++) {
            char t = (i % 2 == 0) ? patStart : other;
            if (s[i] == t) return false;
        }
        return true;
    };

    cout << (canMake('B') || canMake('V') ? "SI" : "NO") << "\n";
    return 0;
}
