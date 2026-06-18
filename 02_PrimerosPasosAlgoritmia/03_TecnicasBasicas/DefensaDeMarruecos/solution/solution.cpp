#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
long long A[MAXN], B[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int j = 0; j < M; j++) cin >> B[j];

    // Two pointers: recorremos los guisados de menor a mayor, y para cada uno
    // tomamos la tortilla disponible mas chica que lo aguante (A[x] * 2 >= B[j]).
    // Si A[x] * 2 < B[j], esa tortilla nunca podra cargar este guisado ni
    // ninguno mayor, asi que la descartamos avanzando x.
    int x = 0, tacos = 0;
    for (int j = 0; j < M; j++) {
        while (x < N && A[x] * 2 < B[j]) x++;
        if (x == N) break;
        tacos++;
        x++;
    }

    cout << tacos << "\n";
    return 0;
}
