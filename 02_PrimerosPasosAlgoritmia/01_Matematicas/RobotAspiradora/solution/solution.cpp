#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;

    // El movimiento en filas es independiente del de columnas.
    // En filas, el robot rebota en [1, n] con periodo 2*(n-1).
    // Hay (a lo mas) dos tiempos por periodo donde la fila es rd:
    //   t1 = (rd - rb) mod 2(n-1) ... yendo "hacia abajo"
    //   t2 = (2n - rb - rd) mod 2(n-1) ... yendo "hacia arriba"
    // Analogo para columnas. La respuesta es el minimo de esos 4 tiempos.
    vector<ll> tiempos;

    if (n == 1) {
        // Robot siempre en fila 1 = rb = rd (forzado por las restricciones).
        tiempos.push_back(0);
    } else {
        ll T = 2 * (n - 1);
        ll t1 = ((rd - rb) % T + T) % T;
        ll t2 = ((2 * n - rb - rd) % T + T) % T;
        tiempos.push_back(t1);
        tiempos.push_back(t2);
    }

    if (m == 1) {
        tiempos.push_back(0);
    } else {
        ll T = 2 * (m - 1);
        ll t1 = ((cd - cb) % T + T) % T;
        ll t2 = ((2 * m - cb - cd) % T + T) % T;
        tiempos.push_back(t1);
        tiempos.push_back(t2);
    }

    cout << *min_element(tiempos.begin(), tiempos.end()) << "\n";
    return 0;
}
