#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long long k;
    cin >> n >> k;

    vector<vector<long long>> A(n);
    vector<long long> L(n);
    for (int i = 0; i < n; i++) {
        cin >> L[i];
        A[i].resize(L[i]);
        for (int j = 0; j < L[i]; j++) cin >> A[i][j];
    }
    vector<long long> C(n);
    for (int i = 0; i < n; i++) cin >> C[i];

    // Recorremos las series en orden. Cada serie aporta L_i * C_i episodios.
    // Si K cabe dentro de la serie i, el episodio buscado es el de posicion
    // ((K-1) % L_i) dentro de A_i. Si no, restamos y seguimos.
    for (int i = 0; i < n; i++) {
        long long aporte = L[i] * C[i];
        if (k <= aporte) {
            cout << A[i][(k - 1) % L[i]] << "\n";
            return 0;
        }
        k -= aporte;
    }
    return 0;
}
