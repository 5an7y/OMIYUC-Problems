Para resolver el problema basta recordar que dividir dos expresiones de la forma 

$$
\frac{cosa1}{cosa2}
$$

es equivalente a hacer $(cosa1) / (cosa2)$. Entonces la expresion que se nos da la podemos ver como

$$
\left( \frac{a \times b}{a + c} \right) \% (b + c) = (a \times b ) / (a + c) \% (b + c)
$$

Lo unico que debemos hacer ahora es poner la expresion en el programa con los valores que nos pidieron de la siguiente forma.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

int main () {
    a = 12;
    b = 11;
    c = 5;
    d = (a * b) / (a + c) % (b + c);
    cout << d;
    return 0;
}
```

El hacer la operacion en una calculadora comun no te dara el resultado ya que las operaciones aqui se hacen con enteros. En especial al hacer la division hay un redondeo.