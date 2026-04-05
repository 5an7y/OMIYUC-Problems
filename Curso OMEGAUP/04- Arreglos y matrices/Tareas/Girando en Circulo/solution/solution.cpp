#include <bits/stdc++.h>
using namespace std;

int N, K, arr[100];

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> arr[i];

    for (int i = N - K; i < N; i++) cout << arr[i] << " ";
    for (int i = 0; i < N - K; i++) cout << arr[i] << " ";

    return 0;
}
