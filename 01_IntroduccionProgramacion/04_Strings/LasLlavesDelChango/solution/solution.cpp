#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;

    int abre = 0, cierra = 0;
    for (char c : s) {
        if (c == '(') abre++;
        else cierra++;
    }

    cout << (abre == cierra ? "SI" : "NO") << "\n";
    return 0;
}
