#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    // Estrategia: por cada mesa, juntar dos valores altos + un bajo.
    // Emparejamos los 2n valores mas grandes en parejas consecutivas
    // (n+1, n+2), (n+3, n+4), ..., (3n-1, 3n) y la mediana de cada
    // mesa es el menor de cada pareja: n+1, n+3, ..., 3n-1.
    // Suma = sum_{k=0..n-1} (n+1+2k) = n(n+1) + n(n-1) = 2*n^2.
    cout << 2 * n * n << "\n";
    return 0;
}
