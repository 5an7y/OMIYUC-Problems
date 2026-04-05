*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Entrada de tamaño variable

Hasta ahora todos los problemas tenían una cantidad fija de datos — leías exactamente lo que el enunciado decía. Pero en la mayoría de los problemas reales la cantidad varía: primero te dicen cuántos datos vienen, y luego te los dan.

# Calificaciones de la película — N amigos

Mismo problema de antes: tienes un grupo de amigos que calificaron una película del $0$ al $10$ y quieres saber la calificación total. Pero ahora no son exactamente $10$ amigos — son $N$. En un caso pueden ser $3$, en otro $20$, en otro solo $1$.

La entrada tiene dos líneas: primero $N$, luego las $N$ calificaciones $c_1, c_2, \ldots, c_N$.

||input
3
8 6 9
||output
23
||end

||input
5
10 10 10 10 10
||output
50
||end

# Leer N números con un for

El patrón es siempre el mismo: leer `N`, luego leer `N` valores dentro de un `for`.

```cpp
int N, x;
cin >> N;
for (int i = 0; i < N; i++) {
    cin >> x;
    // hacer algo con x
}
```

# Solución

Es exactamente el mismo código de la lectura anterior, solo que en lugar del `10` fijo usas `N`.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, x, suma;

int main() {
    cin >> N;
    suma = 0;
    for (int i = 0; i < N; i++) {
        cin >> x;
        suma += x;
    }
    cout << suma;
    return 0;
}
```

De aquí en adelante, cuando un problema diga "te doy $N$ seguido de $N$ números", ya sabes exactamente cómo leerlos.
