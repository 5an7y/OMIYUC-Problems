*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# ¿Necesitas recordar todo?

Imagina que te dan 5 números y te preguntan: ¿cuántos son menores a 4? Tu primer instinto es guardarlos todos para luego compararlos uno a uno. Pero no hace falta — puedes ir leyendo número a número y llevar la cuenta en el momento. Nunca necesitas tener más de un número en memoria a la vez.

A esta clase de problemas les llamamos de **pérdida de memoria**: en cada iteración del ciclo, la variable olvida el valor anterior y solo conoce el valor actual. Muchos problemas que parecen requerir guardar toda la lista se pueden resolver así.

# Suma de números

Nos dan $N$ números y debemos imprimir su suma. El truco: una variable `suma` que empieza en `0` y se va acumulando.

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

Cada vez que leemos un número, lo sumamos y lo olvidamos. Al final `suma` tiene la respuesta.

# Mínimo de una lista

Nos dan $N$ números y queremos el menor. El truco: una variable `menor` que va actualizándose si encontramos algo más pequeño.

```cpp
int N, menor, x;

cin >> N;
for (int i = 0; i < N; i++) {
    cin >> x;
    if (x < menor || i == 0) {
        menor = x;
    }
}
cout << menor;
```

La condición `i == 0` es importante: en la primera iteración, `menor` no tiene un valor válido todavía, así que tomamos el primer número como punto de partida. Después de eso, solo actualizamos si encontramos algo más pequeño.

El mismo patrón funciona para el máximo — solo cambia `<` por `>`.

# Contadores

Otro patrón común: contar cuántos números cumplen una condición.

```cpp
int N, x, cuenta;

cin >> N;
cuenta = 0;
for (int i = 0; i < N; i++) {
    cin >> x;
    if (x < 4) {
        cuenta++;
    }
}
cout << cuenta;
```

Suma, mínimo, máximo, contador — todos siguen el mismo principio: una variable extra que "recuerda" lo único que importa de los números que ya pasaron.
