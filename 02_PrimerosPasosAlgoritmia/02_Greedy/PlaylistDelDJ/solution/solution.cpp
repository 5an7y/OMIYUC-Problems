#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> b(n);
    vector<int> conteo(m + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] >= 1 && b[i] <= m) conteo[b[i]]++;
    }

    int x = n / m;

    // Cola con las bandas que necesitan mas canciones (cada banda se anade
    // tantas veces como canciones le falten para alcanzar x).
    queue<int> deficit;
    for (int j = 1; j <= m; j++) {
        for (int k = conteo[j]; k < x; k++) deficit.push(j);
    }

    int cambios = 0;
    for (int i = 0; i < n; i++) {
        if (deficit.empty()) break;
        bool fueraDeRango = (b[i] < 1 || b[i] > m);
        bool excede       = (!fueraDeRango && conteo[b[i]] > x);
        if (fueraDeRango || excede) {
            int j = deficit.front();
            deficit.pop();
            if (!fueraDeRango) conteo[b[i]]--;
            b[i] = j;
            conteo[j]++;
            cambios++;
        }
    }

    // Si quedan canciones fuera de rango (sin deficit que llenar), las
    // mandamos a cualquier banda en [1, m] (por convencion la 1) para
    // cumplir con que la playlist final tenga b_i en [1, m].
    for (int i = 0; i < n; i++) {
        if (b[i] < 1 || b[i] > m) {
            b[i] = 1;
            cambios++;
        }
    }

    cout << x << " " << cambios << "\n";
    for (int i = 0; i < n; i++) {
        cout << b[i];
        cout << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
