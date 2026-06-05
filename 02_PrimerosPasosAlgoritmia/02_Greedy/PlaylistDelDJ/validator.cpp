#include <bits/stdc++.h>
using namespace std;

namespace Validator {
    std::ifstream case_in, case_out;
    void init_validator() {
        case_in.open("data.in");
        case_out.open("data.out");
        if (!case_in || !case_out) exit(EXIT_FAILURE);
    }
}

static void wa() { cout << 0 << "\n"; exit(0); }

int main() {
    Validator::init_validator();

    int n, m;
    Validator::case_in >> n >> m;
    vector<long long> bOrig(n);
    for (int i = 0; i < n; i++) Validator::case_in >> bOrig[i];

    int xExpected, cambiosMin;
    Validator::case_out >> xExpected >> cambiosMin;
    // No necesitamos leer la playlist oficial.

    int xUser, cambiosUser;
    if (!(cin >> xUser >> cambiosUser)) wa();
    if (xUser != xExpected) wa();
    if (cambiosUser != cambiosMin) wa();

    vector<int> bUser(n);
    for (int i = 0; i < n; i++) {
        if (!(cin >> bUser[i])) wa();
        if (bUser[i] < 1 || bUser[i] > m) wa();
    }

    vector<int> conteo(m + 1, 0);
    for (int i = 0; i < n; i++) conteo[bUser[i]]++;
    for (int j = 1; j <= m; j++) if (conteo[j] < xUser) wa();

    int cambiosReales = 0;
    for (int i = 0; i < n; i++) if ((long long)bUser[i] != bOrig[i]) cambiosReales++;
    if (cambiosReales != cambiosUser) wa();

    cout << 1 << "\n";
    return 0;
}
