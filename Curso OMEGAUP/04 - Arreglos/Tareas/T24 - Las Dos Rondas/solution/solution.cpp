#include <bits/stdc++.h>
using namespace std;

int N, r1[100], r2[100], fin[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> r1[i];
    for (int i = 0; i < N; i++) cin >> r2[i];

    int suma = 0;
    for (int i = 0; i < N; i++) {
        fin[i] = (r1[i] + r2[i]) / 2;
        suma += fin[i];
    }
    int prom = suma / N;

    for (int i = 0; i < N; i++)
        if (fin[i] > prom) cout << i + 1 << " ";

    return 0;
}
