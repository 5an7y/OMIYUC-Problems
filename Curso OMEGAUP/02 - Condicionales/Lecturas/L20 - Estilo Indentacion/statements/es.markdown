Esta es una **lectura** diseñada para el curso de la OMI Yucatán. El curso tiene como propósito enseñar los principios básicos de programación competitiva en C++.

# Estilo: Indentación

No hay una única forma de escribir código, pero sí hay buenas prácticas que casi todos los programadores siguen. La más importante es la **indentación**: agregar espacios (o un tab) al inicio de cada línea que está dentro de un bloque `{}`.

El siguiente código funciona perfectamente:

```cpp
int main() {
cin >> a;
if (a > 17) {
cout << "compra realizada!\n";
}
cout << "gracias!";
}
```

Pero está **muy mal visto**. Nadie puede leerlo rápido y encontrar errores se vuelve mucho más difícil.

La versión correctamente indentada es:

```cpp
int main() {
    cin >> a;
    if (a > 17) {
        cout << "compra realizada!\n";
    }
    cout << "gracias!";
}
```

Cada nivel de llaves agrega un tab (o 4 espacios). Todo lo que está dentro del `main` va con un nivel, todo lo que está dentro del `if` va con dos niveles.

> Nota: algunos programadores ponen la llave de apertura en la línea siguiente. Es un estilo válido, pero en este curso usamos la llave al final de la misma línea:
> ```cpp
> // Estilo alternativo (válido)
> if (condicion)
> {
>     // cosas
> }
>
> // Estilo de este curso
> if (condicion) {
>     // cosas
> }
> ```

La indentación no afecta cómo corre el código — C++ la ignora por completo. Pero sí afecta mucho qué tan fácil es leerlo y encontrar errores. En competencias donde el tiempo importa, un código limpio puede ser la diferencia entre resolver el problema o no.
