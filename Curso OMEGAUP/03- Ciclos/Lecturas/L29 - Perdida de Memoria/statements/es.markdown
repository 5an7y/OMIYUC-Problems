*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# ¿Necesitas recordar todo?

Imagina que tienes que contar cuántas personas son mayores de edad en un grupo de 20. ¿De verdad necesitas reunirlas a todas en un lugar antes de empezar a contar? No — puedes ir persona por persona, preguntarle su edad, y llevar la cuenta en tu cabeza. Al terminar ya tienes la respuesta, sin haber necesitado tener a las 20 juntas en ningún momento.

Con los ciclos pasa lo mismo. A esta clase de problemas les llamamos de **pérdida de memoria**: problemas donde podemos enfocarnos en cada número a la vez, sin necesitar tenerlos a todos "juntos" — es decir, sin guardarlos todos en memoria al mismo tiempo.

# Calificaciones de la película

Tus $10$ amigos vieron la misma película. Cada quien le dio una calificación del $0$ al $10$. Quieres saber la calificación total del grupo.

||input
8 6 9 10 7 5 8 9 6 10
||output
78
||end

No necesitas anotar todas las calificaciones para sumarlas al final — puedes ir preguntando una a una y llevando la suma en el momento. El truco: una variable `suma` que empieza en $0$ y se va acumulando.

```cpp
#include <bits/stdc++.h>
using namespace std;

int x, suma;

int main() {
    suma = 0;
    for (int i = 0; i < 10; i++) {
        cin >> x;
        suma += x;
    }
    cout << suma;
    return 0;
}
```

Cada vez que leemos una calificación, la sumamos y la olvidamos. Al final `suma` tiene la respuesta.

# Mínimo de una lista

¿Y si en lugar de la suma quisieras saber cuál fue la calificación más baja que alguien le dio a la película?

||input
8 6 9 10 7 5 8 9 6 10
||output
5
||end

El truco: una variable `menor` que va actualizándose si encontramos algo más pequeño.

```cpp
#include <bits/stdc++.h>
using namespace std;

int x, menor;

int main() {
    for (int i = 0; i < 10; i++) {
        cin >> x;
        if (x < menor || i == 0) {
            menor = x;
        }
    }
    cout << menor;
    return 0;
}
```

La condición `i == 0` es importante: en la primera iteración, `menor` no tiene un valor válido todavía, así que tomamos el primer número como punto de partida. Después de eso, solo actualizamos si encontramos algo más pequeño.

El mismo patrón funciona para el máximo — solo cambia `<` por `>`.

# Contadores

¿Y si quisieras saber cuántos de tus $10$ amigos le dieron una calificación perfecta de $10$?

||input
8 6 9 10 7 5 8 9 6 10
||output
2
||end

Mismo principio: una variable `cuenta` que arranca en $0$ y sube cuando se cumple la condición.

```cpp
#include <bits/stdc++.h>
using namespace std;

int x, cuenta;

int main() {
    cuenta = 0;
    for (int i = 0; i < 10; i++) {
        cin >> x;
        if (x == 10) {
            cuenta++;
        }
    }
    cout << cuenta;
    return 0;
}
```

Suma, mínimo, máximo, contador — todos siguen el mismo principio: una variable extra que "recuerda" lo único que importa de los números que ya pasaron.
