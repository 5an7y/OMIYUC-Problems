#include <bits/stdc++.h>
using namespace std;

int N, puntos[100], tardanza[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> puntos[i];
    for (int i = 0; i < N; i++) cin >> tardanza[i];

    for (int i = 0; i < N; i++)
        if (tardanza[i] > 30) puntos[i] -= 10;

    for (int i = 0; i < N; i++)
        cout << puntos[i] << " ";

    return 0;
}
