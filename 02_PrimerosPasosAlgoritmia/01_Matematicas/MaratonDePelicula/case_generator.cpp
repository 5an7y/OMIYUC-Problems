#include <iostream>
#include <vector>
#include "Generator.hpp"
#include "Random.hpp"

typedef long long ll;

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    int n, tipo;
    ll maxVal;
    Generator::arguments >> n >> tipo >> maxVal;

    // tipo 1: random general con x random
    // tipo 2: x = 1 (la bruta no salta nada)
    // tipo 3: rangos lejos entre si (gaps grandes) con x random
    ll x;
    if (tipo == 2) x = 1;
    else x = Random::rnd<ll>(1, maxVal);

    // Generar n rangos disjuntos ordenados ascendentes.
    std::vector<std::pair<ll,ll>> ranges;
    ll prev = 0;
    // Espacio disponible total = maxVal. Lo repartimos entre gaps y rangos.
    ll cuotaPorRango = maxVal / (n + 1);
    if (cuotaPorRango < 2) cuotaPorRango = 2;
    for (int i = 0; i < n; i++) {
        ll gapMax = cuotaPorRango;
        if (tipo == 3) gapMax = std::max((ll)1, (maxVal - prev) / (n - i + 1));
        ll gap = Random::rnd<ll>(1, gapMax);
        ll l = prev + gap;
        if (l > maxVal) break;
        ll lenMax = std::max((ll)0, std::min(cuotaPorRango - 1, maxVal - l));
        ll len = Random::rnd<ll>(0, lenMax);
        ll r = l + len;
        if (r > maxVal) r = maxVal;
        ranges.push_back({l, r});
        prev = r;
    }

    Generator::case_in << (int)ranges.size() << " " << x << "\n";
    for (auto &p : ranges) {
        Generator::case_in << p.first << " " << p.second << "\n";
    }
    return 0;
}
