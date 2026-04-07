#include <bits/stdc++.h>
using namespace std;

int N, arr[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];

    int maximo = 0;
    for (int i = 0; i < N; i++)
        if (arr[i] > maximo) maximo = arr[i];

    for (int i = 0; i < N; i++)
        if (arr[i] == maximo) cout << arr[i] << " ";
    cout << '\n';

    for (int i = 0; i < N; i++)
        if (arr[i] < maximo) cout << arr[i] << " ";
    cout << '\n';

    return 0;
}
