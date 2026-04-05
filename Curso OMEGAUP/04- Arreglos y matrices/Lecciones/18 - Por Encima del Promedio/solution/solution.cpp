#include <bits/stdc++.h>
using namespace std;

int N, arr[100];

int main() {
    int suma = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        suma += arr[i];
    }
    int prom = suma / N;

    for (int i = 0; i < N; i++)
        if (arr[i] > prom) cout << arr[i] << " ";
    cout << '\n';

    for (int i = 0; i < N; i++)
        if (arr[i] <= prom) cout << arr[i] << " ";

    return 0;
}
