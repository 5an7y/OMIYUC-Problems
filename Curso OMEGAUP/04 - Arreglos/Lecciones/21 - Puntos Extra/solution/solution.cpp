#include <bits/stdc++.h>
using namespace std;

int K, N, arr[100];

int main() {
    cin >> K >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];

    int F = 0;
    for (int i = 0; i < N; i++) if (arr[i] < 60) F++;
    int bonus = K / F;

    for (int i = 0; i < N; i++) if (arr[i] < 60) arr[i] += bonus;
    for (int i = 0; i < N; i++) if (arr[i] < 60) cout << arr[i] << " ";

    return 0;
}
