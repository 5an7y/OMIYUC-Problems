#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    ll x;
    cin >> n >> x;

    ll t = 1;
    ll vistos = 0;
    for (int i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        // Saltar lo mas posible sin pasarse de l.
        // Cantidad de saltos = floor((l - t) / x).
        if (t < l) {
            ll skips = (l - t) / x;
            t += skips * x;
        }
        // Si t < l, todavia faltan (l - t) minutos para llegar al rango;
        // esos minutos los tienes que ver. Luego ves el rango completo.
        vistos += (l - t) + (r - l + 1);
        t = r + 1;
    }

    cout << vistos << "\n";
    return 0;
}
