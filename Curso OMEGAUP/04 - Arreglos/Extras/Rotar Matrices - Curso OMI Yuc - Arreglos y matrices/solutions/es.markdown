# Construyendo la matriz rotada

Para resolver el problema hay que hacer un poco de uso de nuestra intuición. Observemos que sucede al rotar en nuestros ejemplos. Podemos ver que todas las filas pasan a ser columnas de abajo hacia arriba.

Entonces, nos vale la pena preguntar el elemento $a_{i, j}$ en que posición termina quedando. Si nos damos cuenta la primera fila va a la primera columna, la segunda a la segunda, etc. Entonces, la columna del elemento $a_{i, j}$ resulta ser $i$. Ahora nos queda ver a donde va en la fila y notemos que el orden es inverso. Es decir, el que estaba en la posición $j$ de la fila, no es que este en la posición $j$ de nuestra columna, si no, que se encuentra en la posición $(M - 1) - j$ (el $-1$ es porque indexamos en 0).

Por lo tanto, el elemento que se encontraba en la posición $(i, j)$ en la matriz original, pasa a estar en la posición $(M - 1 - j, i)$ en la matriz rotada. Con esta información podemos construir la nueva matriz y luego la imprimimos.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, M, mat[1000][1000], mat_rot[1000][1000];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> mat[i][j];
            mat_rot[M - 1 - j][i] = mat[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat_rot[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
```

# Leyendo la matriz rotada

Otra forma un poco más inteligente de ahorrarnos un poco de memoria es no tener que guardar la matriz original. Podemos leer directamente el elemento en la posición de la matriz rotada que va.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, M, mat_rot[1000][1000];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> mat_rot[M - 1 - j][i];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat_rot[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
```

# Imprimiendo la matriz rotada

Similar a la idea anterior, otra idea puede ser que en lugar de leer la matriz ya rotada cuando vamos imprimiendo la solución calculamos que elemento de la matriz original necesitamos. Para eso necesitamos saber si un elemento está en la posición $(i, j)$ **de la matriz rotada** a que elemento le corresponde de la matriz original. Haciendo un análisis similar podemos llegar a que es el $(j, M - 1 - i)$.

```cpp
#include <bits/stdc++.h>
using namespace std;

int N, M, mat[1000][1000];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[j][M - 1 - i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
```
