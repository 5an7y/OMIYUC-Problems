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
static void ac() { cout << 1 << "\n"; exit(0); }

// Simula el algoritmo greedy descrito en el enunciado y devuelve el numero de
// vueltas que toma vaciar la mesa. Amortizado O(n).
//
// Idea: mantenemos para cada valor las posiciones recordadas (volteadas y aun
// no pegadas). En cuanto algun valor tiene 2 recordadas, el siguiente turno
// las pega; como el algoritmo descarta de inmediato al detectar el par, nunca
// hay mas de un valor con 2 recordadas simultaneamente.
static int simulate(int n, const vector<int>& a) {
    int n2 = 2 * n;
    vector<char> discarded(n2, 0), flipped(n2, 0);
    vector<vector<int>> pos(n + 1);
    int turns = 0, done = 0, next_idx = 0, pending = -1;
    auto discardPair = [&](int v) {
        int p1 = pos[v][0], p2 = pos[v][1];
        pos[v].clear();
        discarded[p1] = discarded[p2] = 1;
        done += 2;
    };
    while (done < n2) {
        turns++;
        if (pending != -1) {
            discardPair(pending);
            pending = -1;
            continue;
        }
        while (next_idx < n2 && (discarded[next_idx] || flipped[next_idx])) next_idx++;
        if (next_idx >= n2) { turns--; break; }
        int first = next_idx++;
        flipped[first] = 1;
        pos[a[first]].push_back(first);
        if ((int)pos[a[first]].size() >= 2) {
            discardPair(a[first]);
            continue;
        }
        int p2_idx = next_idx;
        while (p2_idx < n2 && (discarded[p2_idx] || flipped[p2_idx])) p2_idx++;
        if (p2_idx >= n2) break;
        flipped[p2_idx] = 1;
        pos[a[p2_idx]].push_back(p2_idx);
        if (a[first] == a[p2_idx]) {
            discardPair(a[first]);
        } else if ((int)pos[a[p2_idx]].size() >= 2) {
            pending = a[p2_idx];
        }
    }
    return turns;
}

int main() {
    Validator::init_validator();

    int n, k;
    Validator::case_in >> n >> k;

    bool achievable = (k >= n && k <= 2 * n - 1);

    string resp;
    if (!(cin >> resp)) wa();
    for (auto& c : resp) c = (char)toupper((unsigned char)c);

    if (resp == "NO") {
        if (achievable) wa();
        ac();
    }
    if (resp != "SI" && resp != "SÍ") wa();
    if (!achievable) wa();

    vector<int> a(2 * n);
    vector<int> cnt(n + 1, 0);
    for (int i = 0; i < 2 * n; i++) {
        if (!(cin >> a[i])) wa();
        if (a[i] < 1 || a[i] > n) wa();
        cnt[a[i]]++;
    }
    for (int v = 1; v <= n; v++) if (cnt[v] != 2) wa();

    if (simulate(n, a) != k) wa();

    ac();
}
