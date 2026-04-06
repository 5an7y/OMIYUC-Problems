#include <bits/stdc++.h>
using namespace std;

int N, arr[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];

    for (int i = 0; i < N; i++) {
        int buscado = 100 - arr[i];
        int encontrado = 0;
        for (int j = 0; j < N; j++) {
            if (arr[j] == buscado) { encontrado = 1; break; }
        }
        if (!encontrado) {
            cout << arr[i];
            break;
        }
    }

    return 0;
}
