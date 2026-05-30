#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> l(n), r(n);
    long long L = 0, R = 0;
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
        L += l[i];
        R += r[i];
    }

    long long mejor = abs(L - R);
    int idx = 0;
    for (int i = 0; i < n; i++) {
        // Si volteamos la columna i: nuevo L' = L - l[i] + r[i],
        // nuevo R' = R - r[i] + l[i]. Nueva belleza = |L' - R'|.
        long long nuevaL = L - l[i] + r[i];
        long long nuevaR = R - r[i] + l[i];
        long long belleza = abs(nuevaL - nuevaR);
        if (belleza > mejor) {
            mejor = belleza;
            idx = i + 1;
        }
    }

    cout << idx << "\n";
    return 0;
}
