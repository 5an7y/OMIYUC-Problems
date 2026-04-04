Las horas se obtienen dividiendo entre $3600$ (los segundos que tiene una hora). Los minutos que quedan se calculan tomando el residuo de dividir entre $3600$, y de eso sacando la división entre $60$. Finalmente, los segundos sobrantes son el residuo de dividir entre $60$.

```cpp
#include <bits/stdc++.h>
using namespace std;

int s;

int main() {
    cin >> s;
    cout << s/3600 << " " << (s%3600)/60 << " " << s%60;
    return 0;
}
```

Nota que `(s%3600)/60` primero elimina las horas completas con el módulo, y luego divide entre 60 para obtener los minutos. Si solo hicieras `s/60` obtendrías el total de minutos (incluyendo los que ya son horas), lo cual sería incorrecto.
