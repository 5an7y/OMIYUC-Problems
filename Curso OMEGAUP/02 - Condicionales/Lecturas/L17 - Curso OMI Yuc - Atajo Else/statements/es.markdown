Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

Fecha de creación: 2 de abril de 2025.

# Atajo: Omitiendo llaves del else

¡Advertencia: este atajo no se les recomienda a personas que están apenas aprendiendo condicionales!

Al igual que con el `if` se pueden ignorar las llaves del `else` siempre y cuando la instrucción que se va a ejecutar es solo una. Es decir, podemos obtener un código como el siguiente.

```cpp
#include <bits/stdc++.h>
using namespace std;

int a;

int main() {
    cin >> a;

    if (a >= 18)
        cout << "Compra realizada!\n";
    else
        cout << "No se pudo realizar la compra porque eres menor de edad\n";

    cout << "Gracias!";
    return 0;
}
```
