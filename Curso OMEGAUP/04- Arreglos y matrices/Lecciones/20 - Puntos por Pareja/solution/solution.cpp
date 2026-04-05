#include <bits/stdc++.h>
using namespace std;

int N, arr[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];

    for (int i = 0; i < N; i += 2)
        cout << arr[i] + arr[i + 1] << " ";

    return 0;
}
