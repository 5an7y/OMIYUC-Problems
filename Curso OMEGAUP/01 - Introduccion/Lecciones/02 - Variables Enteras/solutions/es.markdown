Para resolver el problema basta recordar que dividir dos expresiones de la forma 

$$
\frac{cosa1}{cosa2}
$$

es equivalente a hacer $(cosa1) / (cosa2)$. Entonces la expresion que se nos da la podemos ver como

$$
\frac{a + b}{c \times b} \times (a - c) = (a + b) / (c \times b) \times (a - c) = (a + b) / (c * b) * (a - c)
$$

Lo unico que debemos hacer ahora es poner la expresion en el programa con los valores que nos pidieron de la siguiente forma.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

int main () {
    a = 34153;
    b = 534;
    c = 15;
    d = (a + b) / (c * b) * (a - c);
    cout << d;
    return 0;
}
```

El hacer la operacion en una calculadora comun no te dara el resultado ya que las operaciones aqui se hacen con enteros. En especial al hacer la division hay un redondeo.