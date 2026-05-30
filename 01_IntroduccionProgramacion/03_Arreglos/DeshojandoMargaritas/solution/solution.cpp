#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    long long suma = 0;
    int impar_min = INT_MAX;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        suma += a;
        if (a % 2 == 1 && a < impar_min) impar_min = a;
    }

    if (suma % 2 == 1) {
        cout << suma << "\n";
    } else if (impar_min != INT_MAX) {
        // Quita el impar mas chico para que la suma quede impar (y maxima).
        cout << suma - impar_min << "\n";
    } else {
        // No hay ningun valor impar => imposible.
        cout << 0 << "\n";
    }
    return 0;
}
