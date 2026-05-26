#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    bool ordenada = true;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) { ordenada = false; break; }
    }

    cout << (ordenada ? n : 1) << "\n";
    return 0;
}
