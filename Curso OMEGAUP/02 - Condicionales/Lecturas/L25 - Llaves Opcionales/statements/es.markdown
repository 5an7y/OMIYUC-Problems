Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# Llaves Opcionales

Mucho código que vas a encontrar en internet no usa llaves `{}` en sus `if`. Esto no es un error — es una forma válida de escribir C++. Pero tiene una trampa que atrapa a casi todos.

Cuando el bloque de un `if` tiene **una sola instrucción**, puedes omitir las llaves `{}`:

```cpp
// Con llaves (la forma normal)
if (edad >= 18) {
    cout << "Puedes pasar.\n";
}

// Sin llaves (el atajo)
if (edad >= 18)
    cout << "Puedes pasar.\n";
```

Ambos hacen exactamente lo mismo.

## ¡El error más común con este atajo!

C++ **ignora la indentación**. Para C++, estos dos códigos son idénticos:

```cpp
// Lo que crees que hace
if (edad >= 18)
    cout << "Puedes pasar.\n";
    cout << "Bienvenido!\n";   // ← parece que está dentro del if...
```

```cpp
// Lo que realmente hace
if (edad >= 18) {
    cout << "Puedes pasar.\n";
}
cout << "Bienvenido!\n";       // ← ...pero siempre se ejecuta
```

Sin llaves, el `if` solo "toma" la **primera instrucción**. `"Bienvenido!"` siempre se imprime, sin importar la condición. Este es uno de los bugs más difíciles de detectar porque el código *se ve* correcto pero *se comporta* mal.

**En este curso siempre usaremos llaves.** Cuando veas código ajeno sin ellas, ya sabes lo que significa.
