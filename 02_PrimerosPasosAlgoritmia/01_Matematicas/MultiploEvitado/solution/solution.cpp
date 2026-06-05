#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll l, r, d;
    cin >> l >> r >> d;

    // Si d < l, d ya esta antes del intervalo: es el menor multiplo
    // positivo de d que no pertenece a [l, r].
    // Si no, el menor multiplo de d fuera de [l, r] es el primero
    // mayor que r: (floor(r/d) + 1) * d.
    if (d < l) {
        cout << d << "\n";
    } else {
        cout << ((r / d) + 1) * d << "\n";
    }
    return 0;
}
