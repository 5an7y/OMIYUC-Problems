#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int digitSum(ll n) {
    int s = 0;
    while (n > 0) { s += n % 10; n /= 10; }
    return s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll X;
    cin >> X;

    // Si N - S(N) = X, entonces N = X + S(N).
    // Como S(N) <= 90 para numeros hasta 10^10, basta checar N en [X+1, X+90].
    int count = 0;
    for (ll N = X + 1; N <= X + 90; N++) {
        if (N - digitSum(N) == X) count++;
    }
    cout << count << '\n';
    return 0;
}
