*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Motivación

Todos tus programas hasta ahora hacen cada instrucción exactamente una vez. Pero ¿qué pasa cuando necesitas repetir algo un número desconocido de veces?

Piensa en el siguiente problema: se deja caer una pelota desde una altura de $H$ centímetros. Cada vez que rebota, la pelota sube exactamente la mitad de la altura que tenía. Entonces si la sueltas desde $100$ cm: el primer rebote llega a $50$ cm, el segundo a $25$ cm, el tercero a $12$ cm, el cuarto a $6$ cm, el quinto a $3$ cm, el sexto a $1$ cm, el séptimo a $0$ cm — ya no llega a 1 cm.

¿Cuántos rebotes dio antes de que la altura fuera $0$ cm?

El problema es que la respuesta depende de $H$. Si $H = 100$ son 7 rebotes. Si $H = 1000$ son 10. No puedes escribir el código "a mano" porque no sabes cuántas veces repetirlo. Necesitas algo que se repita **mientras** la altura siga siendo mayor o igual a $1$.

# While

La clausula `while` ejecuta un bloque de código repetidamente **mientras** una condición sea verdadera. Su sintaxis es:

```cpp
while (condicion) {
    // código que se repite
}
```

La condición funciona igual que en un `if`. El bloque se ejecuta, luego se vuelve a verificar la condición. Si sigue siendo verdadera, se vuelve a ejecutar. Cuando deja de cumplirse, el programa continúa.

Así quedaría el programa del rebote:

```cpp
#include <bits/stdc++.h>
using namespace std;

int H, rebotes;

int main() {
    cin >> H;
    rebotes = 0;
    while (H >= 1) {
        H /= 2;
        rebotes++;
    }
    cout << rebotes;
    return 0;
}
```

Para $H = 100$: el ciclo divide $H$ entre $2$ y cuenta un rebote en cada vuelta — $100 \to 50 \to 25 \to 12 \to 6 \to 3 \to 1 \to 0$. Cuando $H$ llega a $0$ ya no cumple `H >= 1` y el ciclo termina. Resultado: $7$ rebotes.

Nota importante: la condición se verifica al **inicio** de cada vuelta. Si en medio de la vuelta la condición deja de cumplirse, el ciclo no se detiene ahí — termina la vuelta completa y luego verifica de nuevo.

# Ciclos infinitos

Un error común al usar `while` es crear un ciclo que nunca termina. Por ejemplo:

```cpp
while (a <= 10) {
    b *= 2;
}
```

Aquí estamos modificando `b` pero verificando `a`. Como `a` nunca cambia, el ciclo corre para siempre — tu programa se **cicló**.

Si al probar tu código ves que tarda demasiado sin dar respuesta, probablemente se cicló. Detén el programa y revisa que la variable que modificas dentro del ciclo sea la misma que estás verificando en la condición.
