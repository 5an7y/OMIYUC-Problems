# ¿Ya no te alcanza la memoria?

En las lecturas de ciclos aprendiste a resolver problemas **sin guardar todos los datos**. Puedes calcular el máximo, la suma, el mínimo, o contar cuántos cumplen una condición — todo eso sin necesitar recordar cada número que leíste.

Pero hay un tipo de problema que eso no puede resolver. Mira este:

> Se te dan $N$ números. Imprímelos en el **orden inverso** al que se te dieron.

Piénsalo un momento. Si te dan `3 1 4 1 5`, la respuesta es `5 1 4 1 3`.

¿Puedes resolverlo con un acumulador? No. Para cuando lees el último número, ya "olvidaste" el primero. Necesitas recordar **todos** al mismo tiempo.

# El problema de las variables

Una solución sería declarar una variable para cada número:

```cpp
int a1, a2, a3, a4, a5;
cin >> a1 >> a2 >> a3 >> a4 >> a5;
cout << a5 << " " << a4 << " " << a3 << " " << a2 << " " << a1;
```

Funciona para 5 números. Pero los límites del problema dicen que $N$ puede ser hasta $100$. Tendrías que escribir esto:

```cpp
int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, ...;
```

Y después leer cada uno por separado:

```cpp
cin >> a1; cin >> a2; cin >> a3; cin >> a4; ...
```

Eso son más de 200 líneas para hacer exactamente lo mismo. Y encima, no puedes usar un ciclo `for` porque cada variable tiene un nombre distinto.

Claramente necesitamos algo mejor.

# La solución existe

Hay una herramienta en C++ que resuelve este problema en 3 líneas de código. Se llama **arreglo**, y la verás en la siguiente lectura.
