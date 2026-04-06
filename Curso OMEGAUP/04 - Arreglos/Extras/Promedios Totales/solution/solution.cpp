#include <bits/stdc++.h>
using namespace std;

int N, M;
int mat[20][20];

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> mat[i][j];

    for (int j = 0; j < M; j++) {
        int suma = 0;
        for (int i = 0; i < N; i++) suma += mat[i][j];
        cout << suma / N << " ";
    }

    return 0;
}
