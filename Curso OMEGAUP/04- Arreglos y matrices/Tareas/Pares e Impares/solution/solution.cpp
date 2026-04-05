#include <bits/stdc++.h>
using namespace std;

int N, arr[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];

    for (int i = 0; i < N; i++)
        if (arr[i] % 2 == 0) cout << arr[i] << " ";
    cout << '\n';

    for (int i = 0; i < N; i++)
        if (arr[i] % 2 != 0) cout << arr[i] << " ";

    return 0;
}
