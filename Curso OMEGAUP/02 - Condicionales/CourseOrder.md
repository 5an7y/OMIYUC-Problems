# Orden del Módulo: 02 - Condicionales

Este archivo define el orden en que deben aparecer los elementos en OmegaUp. Úsalo como referencia al configurar el curso en la plataforma.

La numeración de lecturas continúa desde el módulo 01 (que terminó en L17).

---

## Leccion

Lecturas y lecciones-problema intercaladas, en orden.

| # | Elemento | Descripción |
|---|----------|-------------|
| 1 | **L18 - Condicionales** | Introduce el `if`: la primera herramienta para que el programa tome decisiones. Ejemplo del cine (edad >= 18). |
| 2 | **L19 - Condiciones con Enteros** | Operadores de comparación (`>`, `<`, `==`, `>=`, `<=`, `!=`). Abre con el error `=` vs `==` como hook. |
| 3 | **LECCIÓN 06 - Comparaciones** | Dados a y b, imprimir todos los mensajes de comparación que apliquen. Practica los 6 operadores con ifs independientes. |
| 4 | **L20 - Estilo Indentacion** | La indentación no es decoración — es cómo encuentras tus errores. |
| 5 | **L21 - El Else** | Por qué dos `if` separados pueden fallar. `else` garantiza que solo uno de los dos bloques se ejecute. |
| 6 | **LECCIÓN 07 - Nivel Especial** | Videojuego: si vida >= 500 se reduce a la mitad, si no se duplica. Primer if/else real. |
| 7 | **L22 - If Anidados** | Un `if` dentro de otro para verificar condiciones en secuencia. Motivación: habilidades por tipo y nivel de personaje. |
| 8 | **LECCIÓN 08 - Aumentos** | Tabla de aumentos salariales según años y calificación. Consolida if anidados con 4 combinaciones. |
| 9 | **L23 - Operadores Logicos** | `&&`, `||`, `!` para combinar condiciones. Motivación: montaña rusa (edad Y altura). Tablas de verdad y jerarquía. |
| 10 | **LECCIÓN 09 - Aprobado** | Alumno aprueba si cumple alguna de dos condiciones. Si no, +3 puntos y se reevalúa. Usa operadores lógicos. |
| 11 | **L24 - Variables Booleanas** | Tipo `bool`: recordar si algo ocurrió. Útil cuando tienes varios ifs independientes con efectos secundarios. |
| 12 | **LECCIÓN 10 - Calculando Comparaciones** | Dada opción O (1-4), calcular mayor/menor entre pares. Practica switch implícito con else if. |
| 13 | **L25 - Llaves Opcionales** | Código ajeno a veces omite llaves. Te mostramos la trampa para que puedas reconocerla. |
| 14 | **L26 - Else If** | La forma estándar de manejar múltiples casos mutuamente excluyentes. Ejemplo con rangos de temperatura. |

---

## Tarea

Problemas independientes, en orden de dificultad creciente (tipo cognitivo 1→4).

| # | Elemento | Alias | Tipo | Descripción |
|---|----------|-------|------|-------------|
| 1 | **Par o Impar** | T7 | Tipo 1 | Dado N, imprimir `Par` o `Impar`. Combina `%` del módulo 01 con `if/else`. Primera victoria fácil. |
| 2 | **Gato Compartido** | T8 | Tipo 2 | Dos personas en coordenadas x e y. El gato va con quien esté más cerca. if/else con distancias. |
| 3 | **Tipo de Boleto** | T9 | Tipo 2 | Dado edad, imprimir categoría de boleto. Patrón `else if` con rangos, contexto diferente. |
| 4 | **Ordenando 3 Numeros** | T10 | Tipo 3 | Ordenar a, b, c de menor a mayor con solo condicionales. Sin orden único de solución. |
| 5 | **Bisiesto** | T11 | Tipo 3-4 | Año bisiesto con reglas encadenadas de 4/100/400. Diseñar lógica multi-nivel. |
| 6 | **Radio Frecuencias** | T12 | Tipo 4 | ¿Se traslapan dos rangos [a,b] y [c,d]? Requiere pensar el problema al revés. |
