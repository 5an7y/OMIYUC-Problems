Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# Imprimir: hablarle al mundo

Copia este código en tu editor y dale **Run**:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hola Mundo";
    return 0;
}
```

Debe aparecer el texto **Hola Mundo**. Acabas de escribir tu primer programa funcional.

La instrucción que lo hizo posible es `cout`. Con ella, tu programa puede mostrar cualquier cosa: textos, números, resultados de cálculos. En competencias, `cout` es cómo le dices al evaluador cuál es tu respuesta.

## Sintaxis del cout

```
cout << "texto que quieres imprimir";
```

- Todo lo que va **entre comillas dobles** se imprime tal cual.
- El `;` al final es obligatorio — le indica a C++ que la instrucción terminó. Olvidarlo es uno de los errores más comunes.
- No puedes usar acentos ni ñ directamente (el evaluador usa codificación inglesa). Escribe `anios` en lugar de `años`, `Manana` en lugar de `Mañana`.

## Salto de línea

Para pasar a la siguiente línea usa `\n` dentro del texto:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hola\nMundo";
    return 0;
}
```

||input
||output
Hola
Mundo
||end

Nota que `\n` no deja espacio — si pones `"Hola \n Mundo"` (con espacios), el resultado tendrá esos espacios antes y después del salto.

## Imprimir varias cosas seguidas

Puedes encadenar varios `<<` en una sola instrucción:

```cpp
cout << "El resultado es: " << 42 << "\n";
```

Esto imprime todo en la misma línea antes de saltar. Lo usarás constantemente para combinar texto con números.
