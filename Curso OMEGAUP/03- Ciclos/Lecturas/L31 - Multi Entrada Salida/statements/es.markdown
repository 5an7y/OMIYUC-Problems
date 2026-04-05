*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Un resultado por entrada

Hasta ahora todos los problemas pedían un solo resultado al final. Pero muchos problemas dan $N$ entradas y piden una respuesta para **cada una** — no un resumen, sino una salida por cada dato que llega.

# El remix de Javi

Javi tiene $N$ canciones en su playlist. Quiere saber cuánto duraría cada una en un remix donde todo va al doble de velocidad — es decir, cada canción dura la mitad de tiempo.

Le das las duraciones en segundos y él necesita que le imprimas la duración de cada canción en el remix.

||input
4
120 90 200 61
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
120 90 200 61
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

# Espacios y saltos de línea

En OmegaUp, salvo que el problema lo indique, separar las respuestas con saltos de línea (`'\n'`) o con espacios es equivalente. El juez acepta ambas formas.

Es decir, esta salida:

```
60 45 100 30
```

es lo mismo que esta:

```
60
45
100
30
```

Por eso en estos problemas puedes usar `'\n'` o `' '` sin preocuparte.

# Probando en tu terminal (Editores de online-cpp o codeblocks)

Cuando corres el programa en tu terminal y escribes los datos uno por uno dando Enter después de cada uno, vas a ver algo raro: la entrada y la salida se mezclan en la pantalla.

```
4
120
60
90
45
200
100
61
30
```

Eso es normal — el programa imprime cada respuesta en cuanto la calcula, antes de que termines de dar toda la entrada. No hay nada malo en el código.

OmegaUp no "ve" esa mezcla. Él solo evalúa lo que tu programa imprimió como salida, sin importar cómo se vea en pantalla mientras corría.
