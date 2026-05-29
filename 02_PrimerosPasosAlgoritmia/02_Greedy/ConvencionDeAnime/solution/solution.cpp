#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // Insight: la mejor jugada deja que el recorrido termine al pasar la silla N
    // (sin que el juego corte antes). Eso solo es posible si las sentadas
    // colocan la mochila en sillas YA visitadas (es decir, p_i <= i).
    // Por tanto la respuesta es la cantidad de indices i con p_i <= i.
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        if (p <= i) ans++;
    }
    cout << ans << "\n";
    return 0;
}
