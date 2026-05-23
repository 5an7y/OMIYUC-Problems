#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    bool bonita = false;
    for (int i = 1; i <= n; i++) {
        long long a;
        cin >> a;
        if (a <= (long long)i) bonita = true;
    }

    cout << (bonita ? "SI" : "NO") << "\n";
    return 0;
}
