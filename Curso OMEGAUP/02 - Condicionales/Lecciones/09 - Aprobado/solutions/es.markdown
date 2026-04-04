El primer punto a tratar es cómo verificar el promedio sin usar decimales. En lugar de calcular el promedio, podemos verificar si la **suma** de las calificaciones es al menos $150$ (equivalente a un promedio mayor a $75$). La condición para aprobar queda así:

```
(cal1 >= 70 && cal2 >= 70) || cal1 + cal2 >= 150
```

Para manejar los puntos extras hay varias formas:

# Condiciones anidadas

Verificamos si el alumno aprueba. Si no, sumamos 3 puntos a cada examen y volvemos a verificar.

```cpp
#include <bits/stdc++.h>
using namespace std;

int cal1, cal2;

int main() {
    cin >> cal1 >> cal2;

    if ((cal1 >= 70 && cal2 >= 70) || cal1 + cal2 >= 150) {
        cout << "Aprobado";
    } else {
        cal1 += 3;
        cal2 += 3;
        if ((cal1 >= 70 && cal2 >= 70) || cal1 + cal2 >= 150) {
            cout << "Aprobado";
        } else {
            cout << "No aprobado";
        }
    }

    return 0;
}
```

# Verificar si no aprobó primero

Primero verificamos si el alumno **no aprobó**. Solo en ese caso sumamos los 3 puntos. Después hacemos la verificación final una sola vez.

```cpp
#include <bits/stdc++.h>
using namespace std;

int cal1, cal2;

int main() {
    cin >> cal1 >> cal2;

    if (!((cal1 >= 70 && cal2 >= 70) || cal1 + cal2 >= 150)) {
        cal1 += 3;
        cal2 += 3;
    }

    if ((cal1 >= 70 && cal2 >= 70) || cal1 + cal2 >= 150) {
        cout << "Aprobado";
    } else {
        cout << "No aprobado";
    }

    return 0;
}
```

# Sumar siempre los puntos extras

Una observación interesante: sumar 3 puntos a quien ya aprueba no cambia el resultado (sigue aprobando). Entonces podemos sumar los 3 puntos a todos y hacer una sola verificación al final.

```cpp
#include <bits/stdc++.h>
using namespace std;

int cal1, cal2;

int main() {
    cin >> cal1 >> cal2;
    cal1 += 3;
    cal2 += 3;

    if ((cal1 >= 70 && cal2 >= 70) || cal1 + cal2 >= 150) {
        cout << "Aprobado";
    } else {
        cout << "No aprobado";
    }

    return 0;
}
```

Nota: esta solución solo es válida porque el problema dice que los puntos extras no cambian el resultado para quien ya aprobaba. Si necesitáramos reportar las calificaciones finales correctas, esta atajaría no funcionaría.
