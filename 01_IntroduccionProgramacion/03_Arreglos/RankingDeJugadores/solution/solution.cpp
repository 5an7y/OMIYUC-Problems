#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        // Cuenta cuantos j > i tienen a_j < a_i y cuantos tienen a_j > a_i.
        // La alianza maxima es el mayor de los dos grupos.
        int menores = 0, mayores = 0;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) menores++;
            else if (a[j] > a[i]) mayores++;
        }
        cout << max(menores, mayores);
        cout << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
