#include <bits/stdc++.h>
using namespace std;

namespace Validator {
    std::ifstream case_in, case_out;
    void init_validator() {
        std::string case_in_name("data.in"), case_out_name("data.out");
        case_in.open(case_in_name.c_str());
        case_out.open(case_out_name.c_str());
        if (!case_in) {
            throw std::runtime_error("Error al abrir " + case_in_name + "\n");
            exit(EXIT_FAILURE);
        }
        if (!case_out) {
            throw std::runtime_error("Error al abrir " + case_out_name + "\n");
            exit(EXIT_FAILURE);
        }
        return;
    }
}

static long long bellezaCon(int k, const vector<int> &l, const vector<int> &r,
                            long long L, long long R) {
    if (k == 0) return abs(L - R);
    int i = k - 1;
    long long nuevaL = L - l[i] + r[i];
    long long nuevaR = R - r[i] + l[i];
    return abs(nuevaL - nuevaR);
}

int main() {
    Validator::init_validator();

    int n;
    Validator::case_in >> n;
    vector<int> l(n), r(n);
    long long L = 0, R = 0;
    for (int i = 0; i < n; i++) {
        Validator::case_in >> l[i] >> r[i];
        L += l[i];
        R += r[i];
    }

    int kEsperado;
    Validator::case_out >> kEsperado;

    int kUser;
    if (!(cin >> kUser)) {
        cout << 0 << "\n";
        return 0;
    }
    if (kUser < 0 || kUser > n) {
        cout << 0 << "\n";
        return 0;
    }

    long long bEsperada = bellezaCon(kEsperado, l, r, L, R);
    long long bUser = bellezaCon(kUser, l, r, L, R);

    cout << (bUser == bEsperada ? 1 : 0) << "\n";
    return 0;
}
