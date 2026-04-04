# Solución con else

Verificamos si la vida es menor a 500. Si es así, la multiplicamos por 2; de lo contrario, la dividimos por 2. Al usar `else`, garantizamos que solo una de las dos operaciones se aplique, sin importar cómo cambia el valor.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a;

int main() {
    cin >> a;

    if (a < 500) {
        a *= 2;
    } else {
        a /= 2;
    }

    cout << a;
    return 0;
}
```

# ¿Por qué no funcionan dos ifs?

Si usamos dos `if`s separados en lugar de `if/else`, el código falla. El problema es que la primera condición puede modificar la variable `a`, haciendo que la segunda condición también se cumpla.

Por ejemplo, con $a = 200$: el primer `if` lo duplica a $400$. Luego el segundo `if` verifica si $400 \geq 500$, que es falso, así que en este caso particular "funciona". Pero con $a = 300$: el primer `if` lo duplica a $600$. Luego el segundo `if` ve que $600 \geq 500$ y lo divide entre 2, dando $300$. El resultado final es incorrecto.

```cpp
// Código incorrecto — NO uses esto
if (a < 500) {
    a *= 2;
}
if (a >= 500) {  // ← puede cumplirse después del primer if
    a /= 2;
}
```

Por eso la solución correcta es `if/else`: asegura que solo una rama se ejecute.
