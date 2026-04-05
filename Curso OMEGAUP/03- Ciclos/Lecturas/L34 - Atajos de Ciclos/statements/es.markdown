*Esta es una* ***lectura*** *diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.*

# Ciclos sin llaves

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