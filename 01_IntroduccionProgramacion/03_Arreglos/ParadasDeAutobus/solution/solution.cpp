#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> d(n, INT_MAX);

    // Pasada izquierda -> derecha: distancia al cero anterior.
    int ultimoCero = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) ultimoCero = i;
        if (ultimoCero != -1) d[i] = i - ultimoCero;
    }

    // Pasada derecha -> izquierda: distancia al cero posterior.
    ultimoCero = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 0) ultimoCero = i;
        if (ultimoCero != -1) d[i] = min(d[i], ultimoCero - i);
    }

    for (int i = 0; i < n; i++) {
        cout << d[i];
        cout << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
