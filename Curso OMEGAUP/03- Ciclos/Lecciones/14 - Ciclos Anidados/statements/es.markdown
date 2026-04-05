*Este problema es una* ***lección*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Problema

Dado $N$, imprime una media pirámide de asteriscos con base $N$: la primera fila tiene $1$ asterisco, la segunda $2$, la tercera $3$, y así hasta la fila $N$.

# Entrada

Un único entero $N$.

# Salida

La media pirámide de asteriscos.

# Ejemplos

||input
4
||output
*
**
***
****
||input
6
||output
*
**
***
****
*****
******
||end

# Limites

- $0 < N < 100$

# Pista

Recuerda que dentro de un `for` puedes usar la variable de control `i` dentro del ciclo interior.

```cpp
for (int i = 0; i < N; i++) {
    for (int j = 0; j != i; j++) {
        // ...
    }
}
```
