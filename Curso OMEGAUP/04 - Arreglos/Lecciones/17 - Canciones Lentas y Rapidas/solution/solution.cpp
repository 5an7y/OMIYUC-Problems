#include <bits/stdc++.h>
using namespace std;

int K, N, arr[100];

int main() {
    cin >> K >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];

    for (int i = 0; i < N; i++)
        if (arr[i] < K) cout << arr[i] << " ";
    cout << '\n';

    for (int i = 0; i < N; i++)
        if (arr[i] >= K) cout << arr[i] << " ";

    return 0;
}
