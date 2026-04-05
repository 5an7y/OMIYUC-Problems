#include <bits/stdc++.h>
using namespace std;

int N, M;
int mat[10][10];

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> mat[i][j];

    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < M; j++)
            cout << mat[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
