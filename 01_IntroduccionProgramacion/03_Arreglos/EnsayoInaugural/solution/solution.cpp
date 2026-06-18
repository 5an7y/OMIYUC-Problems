#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
long long C[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    long long K;
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> C[i];

    // Procesamos cada serie al vuelo: no guardamos ningun A_i en memoria.
    // Para cada i: leemos L y luego sus L identificadores. Si K cabe en esta
    // serie, sabemos cual es la posicion buscada y solo guardamos ese valor.
    for (int i = 0; i < N; i++) {
        int L;
        cin >> L;
        long long aporte = (long long)L * C[i];
        long long posBuscada = (K <= aporte) ? ((K - 1) % L + 1) : -1;
        long long respuesta = 0;
        for (int j = 1; j <= L; j++) {
            long long x;
            cin >> x;
            if ((long long)j == posBuscada) respuesta = x;
        }
        if (posBuscada != -1) {
            cout << respuesta << "\n";
            return 0;
        }
        K -= aporte;
    }
    return 0;
}
