*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Atajos de ciclos

Como en los condicionales, hay formas abreviadas de escribir ciclos que verás frecuentemente en código ajeno.

# While y For sin llaves

Si el cuerpo del ciclo tiene una sola instrucción, puedes omitir las llaves:

```cpp
// Con llaves (recomendado)
while (a < 100) {
    a *= 10;
}

// Sin llaves (atajo)
while (a < 100)
    a *= 10;
```

Lo mismo para el `for`:

```cpp
for (int i = 0; i < N; i++)
    cout << i << '\n';
```

Ten cuidado: si agregas una segunda instrucción sin llaves, solo la primera forma parte del ciclo. La segunda siempre se ejecuta una vez, después del ciclo. Es el mismo error que con el `if`.

# while(N--)

Este atajo ejecuta un ciclo exactamente `N` veces, usando la misma variable:

```cpp
while (N--) {
    // se ejecuta N veces
}
```

¿Cómo funciona? El operador `--` resta 1 a `N` y el `while` verifica si el valor **antes de restar** es distinto de 0. Entonces si `N = 3`: verifica 3 (sí), ejecuta, `N` queda en 2; verifica 2 (sí), ejecuta, `N` queda en 1; verifica 1 (sí), ejecuta, `N` queda en 0; verifica 0 (no), sale.

La desventaja: al terminar, `N` vale 0. Si necesitas el valor original después, guárdalo antes:

```cpp
int total = N;
while (N--) {
    // N se modifica aquí
}
// usar total si necesitas el N original
```
