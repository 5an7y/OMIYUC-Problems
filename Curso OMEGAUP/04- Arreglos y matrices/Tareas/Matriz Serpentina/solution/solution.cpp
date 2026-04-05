#include <bits/stdc++.h>
using namespace std;

int N, M;
int mat[20][20];

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> mat[i][j];

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < M; j++) cout << mat[i][j] << " ";
        } else {
            for (int j = M - 1; j >= 0; j--) cout << mat[i][j] << " ";
        }
    }

    return 0;
}
