#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Cada tomate con peso > 1 debe pagar su peso (mejor empaque individual).
    // Cada tomate con peso = 1 es "gratis" si tiene cualquier tomate despues de el
    // (cabe en cualquier empaque que cubra algo posterior, ya que 1 multiplica por 1).
    // El ultimo tomate de la banda siempre paga su peso porque no tiene a quien pegarse.
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            if (i == n - 1) ans += 1;
        } else {
            ans += a[i];
        }
    }

    cout << ans << "\n";
    return 0;
}
