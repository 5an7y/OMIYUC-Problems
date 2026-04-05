*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Entrada de tamaño variable

Hasta ahora todos los problemas tenían una cantidad fija de datos de entrada — leías exactamente lo que el enunciado decía. Pero en la mayoría de los problemas reales la cantidad de datos varía: primero te dicen cuántos vienen, y luego te los dan.

El patrón es siempre el mismo: leer `N`, luego leer `N` cosas dentro de un `for`.

```cpp
int N, x;
cin >> N;
for (int i = 0; i < N; i++) {
    cin >> x;
    // hacer algo con x
}
```

# Ejemplo

Te dan $N$ números. Imprime cada uno multiplicado por $2$.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, x;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        cout << x * 2 << '\n';
    }
    return 0;
}
```

Para la entrada `3` / `5 8 1`, el programa lee $N = 3$, luego en cada vuelta del ciclo lee un número e imprime su doble: `10`, `16`, `2`.

# Lo que ya usaste sin saberlo

En la lectura anterior (Pérdida de Memoria) ya usaste este patrón — era la forma de leer las calificaciones, los números para el mínimo, etc. Ahora tiene nombre y forma explícita.

De aquí en adelante, cada vez que un problema diga "te doy $N$ seguido de $N$ números", ya sabes exactamente cómo leerlos.
