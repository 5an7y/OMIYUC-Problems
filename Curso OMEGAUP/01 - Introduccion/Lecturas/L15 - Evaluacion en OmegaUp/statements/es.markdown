Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# Cómo evalúa OmegaUp tu código

¿Cómo sabe OmegaUp si tu solución es correcta? No hay nadie leyendo cada código. La plataforma usa **casos de prueba**: pares de entrada esperada y salida esperada que el autor del problema definió.

## Casos de prueba

Un caso es simplemente: "si le doy esta entrada, el programa debe producir esta salida exacta". Para el problema de sumar dos números:

||input
10 32
||output
42
||input
2 2
||output
4
||input
0 0
||output
0
||input
69 1
||output
70
||end

Tu código debe pasar **todos** los casos para obtener 100 puntos. Si pasa la mitad, obtienes 50 puntos.

## Por qué los valores hardcodeados fallan

Este código solo pasa el primer caso:

```cpp
// MAL — solo funciona para 10 y 32
int main() {
    cout << 42;
    return 0;
}
```

Para pasar todos los casos el código debe leer la entrada con `cin` y calcular la respuesta correctamente:

```cpp
// BIEN — funciona para cualquier entrada
#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
    cin >> a >> b;
    cout << a + b;
    return 0;
}
```

## El error más común: salida con formato

**Solo imprime la respuesta.** Nunca agregues mensajes como "Ingresa los números:" o "El resultado es:". OmegaUp compara tu salida exacta con la salida esperada; cualquier texto extra hace que el caso falle.

```cpp
// MAL — la salida extra causa Wrong Answer
cout << "La suma es: " << a + b;

// BIEN
cout << a + b;
```

Si la salida esperada es `68` y tu programa imprime `La suma es: 68`, OmegaUp lo marca incorrecto porque las cadenas son distintas.

## Resumen

- Usa `cin` para leer la entrada, `cout` para imprimir la respuesta.
- No hardcodees valores — el evaluador usa casos que tu código no puede ver.
- No imprimas texto extra más allá de lo que el problema pide.
