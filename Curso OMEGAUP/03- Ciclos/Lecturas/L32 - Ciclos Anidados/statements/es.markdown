*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Ciclos dentro de ciclos

Así como puedes poner un `if` dentro de otro `if`, puedes poner un ciclo dentro de otro ciclo. Esto es útil cuando necesitas hacer algo en dos dimensiones — como dibujar un rectángulo.

Nos dan $N$ y $M$ y debemos imprimir un rectángulo de $N$ filas con $M$ asteriscos cada una:

```
***
***
***
***
```

# Anidación

La idea: un ciclo exterior que repite $N$ veces "imprimir una fila completa", y dentro, un ciclo interior que imprime $M$ asteriscos seguidos.

```cpp
for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
        cout << "*";
    }
    cout << '\n';
}
```

El `cout << '\n'` está fuera del ciclo interior pero dentro del exterior — así imprime el salto de línea al terminar cada fila, no después de cada asterisco.

El programa completo del rectángulo:

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, M;

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}
```

# Nombres de variables en ciclos anidados

Nota que el ciclo interior usa `j`, no `i`. Esto no es opcional: la variable `i` fue declarada en el `for` exterior y sigue existiendo dentro — si declararas otra `i` en el interior habría dos variables con el mismo nombre, lo que es un error de compilación.

La convención es usar `i` para el ciclo exterior, `j` para el interior, `k` para un tercero si lo necesitaras.

```cpp
for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
        // aquí puedes usar tanto i como j
    }
}
```

Puedes usar `i` en la condición del ciclo interior para que cuántas veces corre el interior dependa de dónde vamos en el exterior. Por ejemplo, imprimir un triángulo: la fila $i$ tiene $i+1$ asteriscos. El único cambio respecto al rectángulo es que el ciclo interior corre hasta `i + 1` en lugar de hasta `M`:

```cpp
#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}
```

||input
4
||output
*
**
***
****
||input
2
||output
*
**
||end
