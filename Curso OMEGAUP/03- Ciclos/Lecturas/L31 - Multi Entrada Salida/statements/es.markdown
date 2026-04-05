*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Un resultado por entrada

Hasta ahora todos los problemas pedían un solo resultado al final. Pero muchos problemas dan $N$ entradas y piden una respuesta para **cada una** — no un resumen, sino una salida por cada dato que llega.

# El remix de Javi

Javi tiene $N$ canciones en su playlist. Quiere saber cuánto duraría cada una en un remix donde todo va al doble de velocidad — es decir, cada canción dura la mitad de tiempo.

Le das las duraciones en segundos y él necesita que le imprimas la duración de cada canción en el remix.

||input
4
120 90 200 60
||output
60
45
100
30
||end

# El patrón

La diferencia con los problemas anteriores es que el `cout` va **dentro** del `for`, no afuera. Así se imprime una respuesta por cada iteración:

```cpp
int N, x;
cin >> N;
for (int i = 0; i < N; i++) {
    cin >> x;
    cout << x / 2 << '\n';
}
```

# Solución completa

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, x;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        cout << x / 2 << '\n';
    }
    return 0;
}
```

||input
4
120 90 200 60
||output
60
45
100
30
||input
1
300
||output
150
||end

Cada vez que se lee un dato, se procesa y se imprime de inmediato. No hay que esperar a leer todos los datos para empezar a imprimir.
