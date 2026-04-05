*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Motivación

Todos tus programas hasta ahora hacen cada instrucción exactamente una vez. Pero ¿qué pasa cuando necesitas repetir algo indefinidamente?

Imagina un juego donde tienes $a$ puntos de vida y tu oponente $b$. Sacas una carta que duplica tu vida **mientras** sea menor a la del contrincante. Si tienes $5$ y él tiene $22$: duplicas a $10$, sigues con menos, duplicas a $20$, sigues con menos, duplicas a $40$. Ya le ganas.

¿Cómo programas eso? No puedes escribir "duplicar" tres veces fijo — no sabes cuántas veces necesitarás. Necesitas algo que repita **mientras** se cumpla una condición.

# While

La clausula `while` ejecuta un bloque de código repetidamente **mientras** una condición sea verdadera. Su sintaxis es:

```cpp
while (condicion) {
    // código que se repite
}
```

La condición es igual a la de un `if` — puede usar `>`, `<`, `==`, `&&`, `||`, etc. El bloque se ejecuta, luego se vuelve a verificar la condición. Si sigue siendo verdadera, se vuelve a ejecutar. Cuando deja de cumplirse, el programa sigue adelante.

Ejemplo: duplicar vida hasta superar al rival.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
    cin >> a >> b;
    while (a <= b) {
        a *= 2;
    }
    cout << a;
    return 0;
}
```

Nota importante: la condición se verifica al **inicio** de cada vuelta. Si en medio de la vuelta la condición deja de cumplirse, el ciclo no se detiene ahí — termina la vuelta completa y luego verifica de nuevo.

# Ciclos infinitos

Un error común al usar `while` es crear un ciclo que nunca termina. Por ejemplo:

```cpp
while (a <= 10) {
    b *= 2;
}
```

Aquí estamos modificando `b` pero verificando `a`. Como `a` nunca cambia, el ciclo corre para siempre — tu programa se **cicló**.

Si al probar tu código ves que tarda demasiado sin dar respuesta, probablemente se cicló. Cierra la consola y revisa que la variable que modificas dentro del ciclo sea la misma que estás verificando en la condición.
