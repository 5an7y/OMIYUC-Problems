Es similar al problema de encontrar el maximo pero en este caso debemos contar frecuencia de un numero. Usaremos la ventaja de que los numeros estan ordenados, eso nos da dos propiedades:

1- Numeros iguales se encuentran contiguos.
2- Si dos numeros tienen la misma frecuencia basta con quedarnos con el primero que encontremos.

Por tanto, podemos contar cuantas veces aparece un numero solo llevan el anterior a ese mismo y una variable de `frecuencia_actual` que nos lleva cuantas veces aparece el número actual. Una vez que pasemos a un número diferente sabemos cuántas veces apareció el anterior. 

Por ejemplo, imagina que tenemos la secuencia `[2, 2, 2, 4]`. Sabemos que el primero es un `2`; por tanto, su frecuencia actualmente es `1`. Ahora, leemos el siguiente número, es un `2` al igual que el anterior, aumentamos la frecuencia actual a `2`. Luego leemos otro `2` y como es igual que el anterior la frecuencia actual aumenta a `3`. Finalmente leemos un `4`, este es distinto al anterior; por lo que sabemos que el `2` aparece `3` veces.

```cpp
#include <bits/stdc++.h>
using namespace std;

int maxima_frecuencia, respuesta, frecuencia_actual, N, anterior, actual;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;

    cin >> anterior;
    // Iniciamos la respuesta como el actual
    respuesta = actual;
    frecuencia_actual = maxima_frecuencia = 1; // Hasta ahora solo lo hemos visto una vez.

    for (int i = 1; i < N; i++) {
        cin >> actual;
        if (actual == anterior) {
            frecuencia_actual++;
        } else {
            if (frecuencia_actual > maxima_frecuencia) {
                maxima_frecuencia = frecuencia_actual;
                respuesta = anterior;
            }
            frecuencia_actual = 1; // Solo hemos visto una vez el nuevo numero.
        }
        anterior = actual;
    }
    
    // Verificamos la frecuencia del ultimo numero que leimos
    if (frecuencia_actual > maxima_frecuencia) {
        maxima_frecuencia = frecuencia_actual;
        respuesta = anterior;
    }

    cout << respuesta;
    return 0;
}
```
