#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    // K alcanzable sii n <= k <= 2n - 1.
    if (k < n || k > 2 * n - 1) {
        cout << "NO\n";
        return 0;
    }

    // Construccion del editorial: para k = n + d, sea x = d + 1. Las primeras x
    // parejas se ponen en el patron "maximo" 1, 2, 3, 1, 4, 2, 5, 3, ..., x-2,
    // x-1, x que toma 2x - 1 vueltas. Las restantes n - x parejas se ponen
    // juntas: x+1, x+1, ..., n, n. Total: (2x-1) + (n-x) = k.
    int x = k - n + 1;

    cout << "YES\n";
    vector<int> ans;
    if (x == 1) {
        ans = {1, 1};
    } else if (x == 2) {
        ans = {1, 2, 1, 2};
    } else {
        // x >= 3
        ans.push_back(1);
        ans.push_back(2);
        ans.push_back(3);
        // Para i = 1..x-3: alternar segunda copia de i y primera copia de i+3.
        for (int i = 1; i <= x - 3; i++) {
            ans.push_back(i);
            ans.push_back(i + 3);
        }
        // Cierra con las segundas copias de x-2, x-1, x.
        ans.push_back(x - 2);
        ans.push_back(x - 1);
        ans.push_back(x);
    }
    // Restantes parejas x+1..n juntas.
    for (int i = x + 1; i <= n; i++) {
        ans.push_back(i);
        ans.push_back(i);
    }

    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << " \n"[i + 1 == ans.size()];
    }
    return 0;
}
