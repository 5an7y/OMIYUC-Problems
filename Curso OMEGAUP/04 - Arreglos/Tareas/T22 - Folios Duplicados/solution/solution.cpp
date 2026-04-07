#include <bits/stdc++.h>
using namespace std;

int N, arr[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];

    for (int i = 0; i < N; i++) {
        int yaImpreso = 0;
        for (int k = 0; k < i; k++)
            if (arr[k] == arr[i]) yaImpreso = 1;
        if (!yaImpreso) {
            int cnt = 0;
            for (int j = 0; j < N; j++)
                if (arr[j] == arr[i]) cnt++;
            if (cnt > 1) cout << arr[i] << " ";
        }
    }

    return 0;
}
