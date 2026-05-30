#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int l[4], s[4], r[4], p[4];
    for (int i = 0; i < 4; i++) {
        cin >> l[i] >> s[i] >> r[i] >> p[i];
    }

    // Para cada esquina i con paso peatonal en verde,
    // revisar si algun carril que cruza ese paso esta en verde.
    for (int i = 0; i < 4; i++) {
        if (p[i] == 1) {
            int prev = (i + 3) % 4;
            int next = (i + 1) % 4;
            int op   = (i + 2) % 4;
            if (l[i] || s[i] || r[i] || s[op] || l[next] || r[prev]) {
                cout << "SI\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}
