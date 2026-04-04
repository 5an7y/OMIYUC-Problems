Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# Else If

Cuando tienes más de dos casos para una misma variable, anidar `if`s se vuelve difícil de leer rápidamente. `else if` es la forma estándar de manejarlo.

Cuando lo único que hay dentro de un `else` es otro `if`, puedes unirlos en una sola línea: el `else if`.

Imagina que tienes una temperatura y quieres mostrar un mensaje según el rango:

| Temperatura | Mensaje |
|---|---|
| < 0 | ¡Me congelo! |
| 0 – 11 | Hace frío |
| 12 – 19 | Decente |
| 20 – 28 | Un poco de calor |
| 29 – 37 | ¡Qué calor! |
| > 37 | ¡Me derrito! |

Sin `else if`, tendrías que anidar varios `if`/`else` hasta perder la cuenta. Con `else if` queda limpio:

```cpp
#include <bits/stdc++.h>
using namespace std;

int temperatura;

int main() {
    cin >> temperatura;

    if (temperatura < 0) {
        cout << "Me congelo!";
    } else if (temperatura <= 11) {
        cout << "Hace frio";
    } else if (temperatura <= 19) {
        cout << "Decente";
    } else if (temperatura <= 28) {
        cout << "Un poco de calor";
    } else if (temperatura <= 37) {
        cout << "Que calor";
    } else {
        cout << "Me derrito!";
    }

    return 0;
}
```

Nota que **no repites la condición anterior** en cada `else if`. C++ ya sabe que si llegó a `temperatura <= 19`, es porque los casos anteriores (`< 0` y `<= 11`) ya no se cumplieron. Por eso solo preguntas por el límite superior de cada rango.

El `else if` es muy útil cuando tienes muchos casos mutuamente excluyentes. Es más limpio que varios `if` separados y más legible que ifs muy anidados.
