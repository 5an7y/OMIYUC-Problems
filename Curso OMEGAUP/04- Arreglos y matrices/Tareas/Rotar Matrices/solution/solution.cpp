#include <bits/stdc++.h>
using namespace std;

int N, M;
int mat[20][20];
int rot[20][20];

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> mat[i][j];

    // 90° antihorario: rot[M-1-j][i] = mat[i][j]
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            rot[M - 1 - j][i] = mat[i][j];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            cout << rot[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
