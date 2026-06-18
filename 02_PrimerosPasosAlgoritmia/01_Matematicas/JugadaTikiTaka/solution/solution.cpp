#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // Observacion clave: la jugada puede visitar TODAS las zonas excepto exactamente
    // una de la antidiagonal {(1, n), (2, n-1), ..., (n, 1)}. Para entrar a una zona
    // (x, n+1-x) hay que venir desde (x-1, n+1-x) o desde (x, n-x), y entre todos los
    // predecesores posibles aparece (n, n) que es la zona final (no se puede salir de
    // ahi), asi que efectivamente solo hay n-1 maneras de entrar a la antidiagonal.
    // Por tanto saltamos UNA celda de la antidiagonal, y para maximizar la suma
    // saltamos la mas chica.
    long long suma = 0;
    long long minAntiDiag = LLONG_MAX;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            long long x; cin >> x;
            suma += x;
            if (i + j == n + 1) minAntiDiag = min(minAntiDiag, x);
        }
    }

    cout << suma - minAntiDiag << "\n";
    return 0;
}
