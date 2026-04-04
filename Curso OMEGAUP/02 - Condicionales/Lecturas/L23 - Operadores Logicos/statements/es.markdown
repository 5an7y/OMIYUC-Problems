Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.
# Operadores Lógicos

Imagina que construyes el sistema de registro de una montaña rusa. Para subir necesitas **dos** cosas al mismo tiempo: ser mayor de 12 años **y** medir más de 140 cm. ¿Cómo verificarías ambas con un solo `if`?

Con lo que sabes hasta ahora tendrías que anidarlos:

```cpp
if (edad > 12) {
    if (altura > 140) {
        cout << "Puedes subir";
    } else {
        cout << "No puedes subir";
    }
} else {
    cout << "No puedes subir";
}
```

Funciona, pero tuviste que escribir el mensaje de rechazo dos veces. Y si fueran 3 condiciones, serían 3 niveles de anidación. Hay una forma mejor.

## AND (&&) — ambas deben cumplirse

El operador `&&` une dos condiciones en una sola. El resultado es verdadero **solo si las dos son verdaderas**.

```cpp
if (edad > 12 && altura > 140) {
    cout << "Puedes subir";
} else {
    cout << "No puedes subir";
}
```

Tabla de verdad del AND:

| condicion1 | condicion2 | condicion1 && condicion2 |
|---|---|---|
| Verdadero | Verdadero | **Verdadero** |
| Verdadero | Falso | Falso |
| Falso | Verdadero | Falso |
| Falso | Falso | Falso |

Puedes encadenar más de dos: `c1 && c2 && c3` se cumple solo si todas son verdaderas.

## OR (||) — al menos una debe cumplirse

El operador `||` se cumple si **alguna** de las condiciones es verdadera. Piensa en un profesor que te dice: "pasas si aprobaste el primer parcial **o** el segundo". No necesitas pasar los dos.

```cpp
if (parcial1 >= 70 || parcial2 >= 70) {
    cout << "Puedes presentar el final";
} else {
    cout << "No puedes presentar el final";
}
```

Tabla de verdad del OR:

| condicion1 | condicion2 | condicion1 \|\| condicion2 |
|---|---|---|
| Verdadero | Verdadero | **Verdadero** |
| Verdadero | Falso | **Verdadero** |
| Falso | Verdadero | **Verdadero** |
| Falso | Falso | Falso |

## NOT (!) — invertir una condición

El operador `!` invierte el valor de una condición: lo verdadero se vuelve falso y viceversa. Es útil cuando es más natural pensar en lo que **no** debe ocurrir.

```cpp
if (!(calificacion >= 70)) {
    calificacion += 5;  // solo suma puntos a quien NO aprobó
}
```

Por sí solo, `!` parece innecesario ya que siempre puedes cambiar el comparador (`calificacion < 70`). Su verdadero poder aparece al combinar operadores.

## Combinando operadores

Los operadores lógicos tienen jerarquía, igual que `*` y `+` en aritmética:

1. `( )` — paréntesis
2. `!` — NOT
3. `&&` — AND
4. `||` — OR

**Usa siempre paréntesis** cuando mezcles `&&` y `||` en la misma condición. Así el código queda claro y evitas errores.

Ejemplo completo: para obtener una licencia de conducir necesitas tener 18 años o más **y** una calificación de al menos 70 en el examen. Además, si tienes 25 años o más con cualquier calificación, también calificas (conductor experimentado).

```cpp
#include <bits/stdc++.h>
using namespace std;

int edad, calificacion;

int main() {
    cin >> edad >> calificacion;

    if ((edad >= 18 && calificacion >= 70) || edad >= 25) {
        cout << "Licencia aprobada";
    } else {
        cout << "Licencia rechazada";
    }

    return 0;
}
```

||input
20 75
||output
Licencia aprobada
||input
20 60
||output
Licencia rechazada
||input
26 40
||output
Licencia aprobada
||end
