#include <bits/stdc++.h>
using namespace std;

int N, M;
int mat[10][10];

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> mat[i][j];

    for (int j = 0; j < M; j++)
        for (int i = 0; i < N; i++)
            cout << mat[i][j] << " ";

    return 0;
}
