# ¿Ya no te alcanza la memoria?

En las lecturas de ciclos aprendiste a resolver problemas **sin guardar todos los datos**. Puedes calcular el máximo, la suma, el mínimo, o contar cuántos cumplen una condición — todo eso sin necesitar recordar cada número que leíste.

Pero hay un tipo de problema que eso no puede resolver. Mira este:

> Se te dan $N$ números (algunos positivos, algunos negativos). Imprime primero todos los **negativos** y luego todos los **positivos**, en el orden en que aparecieron.

Por ejemplo,

||input
6
-3 5 -1 2 -4 7
||output
-3 -1 -4
5 2 7
||end

¿Puedes resolverlo con un acumulador? No. Para imprimir los negativos necesitas haberlos guardado todos — porque algunos vienen después de los positivos. Si lees de uno en uno y los "olvidas", no puedes volver a imprimirlos en la segunda línea.

# El problema de las variables

Una solución sería declarar una variable para cada número:

```cpp
int a1, a2, a3, a4, a5, a6;
cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
if (a1 < 0) cout << a1 << " ";
if (a2 < 0) cout << a2 << " ";
// ... y así para los 6
```

Funciona para 6 números. Pero necesitamos algo que funcione para cualquier tamano de entrada.

# La solución existe

Hay una herramienta en C++ que resuelve este problema en pocas líneas de código. Se llama **arreglo**, y la verás en la siguiente lectura.
