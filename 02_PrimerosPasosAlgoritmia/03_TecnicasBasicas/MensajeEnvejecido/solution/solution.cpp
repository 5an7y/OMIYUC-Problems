#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string X;
    cin >> n >> X;

    // dp[p] = true si podemos llegar al estado actual con paridad p
    // de L (cuantas letras se tomaron del frente).
    // En cada paso, las letras posibles dependen de la paridad de (n - i):
    //   par   -> las dos opciones (frente/atras) son letras distintas
    //   impar -> las dos opciones son la misma letra (forzada)
    bool dp[2] = {true, false};
    for (int i = 0; i < n; i++) {
        bool nuevo[2] = {false, false};
        bool casoDistintas = ((n - i) % 2 == 0);
        for (int p = 0; p < 2; p++) {
            if (!dp[p]) continue;
            if (casoDistintas) {
                char frente = (p == 0) ? 'a' : 'b';
                char atras  = (p == 0) ? 'b' : 'a';
                if (X[i] == '?' || X[i] == frente) nuevo[p ^ 1] = true;
                if (X[i] == '?' || X[i] == atras)  nuevo[p]     = true;
            } else {
                char forzada = (p == 0) ? 'a' : 'b';
                if (X[i] == '?' || X[i] == forzada) {
                    nuevo[p ^ 1] = true;
                    nuevo[p]     = true;
                }
            }
        }
        dp[0] = nuevo[0];
        dp[1] = nuevo[1];
    }

    cout << (dp[0] || dp[1] ? "SI" : "NO") << "\n";
    return 0;
}
