#include <bits/stdc++.h>
using namespace std;

int N, arr[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];

    int maximo = 0;
    for (int i = 0; i < N; i++) {
        int cnt = 0;
        for (int j = 0; j < N; j++) if (arr[j] == arr[i]) cnt++;
        if (cnt > maximo) maximo = cnt;
    }

    cout << maximo;
    return 0;
}
