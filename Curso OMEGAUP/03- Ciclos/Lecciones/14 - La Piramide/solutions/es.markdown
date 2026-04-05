Para este problema usaremos el hecho de que `i` justamente es nuestro indicador en que altura nos encontramos. Es decir, en la primera vuelta de un ciclo 

```cpp
for (int i = 0; i < N; i++) {

}
```

`i` vale $0$, luego $1$ y así hasta $N-1$. Si hacemos 

```cpp
for (int i = 0; i < N; i++) {
    cout << i << " ";
}
```

Vemos como nos imprime todos los numeros desde $0$ hasta $N-1$. Podemos aprovechar este numero como indicador de cuantos asteriscos debemos poner. Para el rectangulo haciamos

```cpp
for (int j = 0; j < M; j++) {
    cout << "*";
}
```

porque en cada altura debíamos poner $M$ asteriscos. En este caso, en cada altura vamos a poner $i + 1$ asteriscos (porque `i` inicia en $0$). Y el código nos quedaría como

```cpp
#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}
```
