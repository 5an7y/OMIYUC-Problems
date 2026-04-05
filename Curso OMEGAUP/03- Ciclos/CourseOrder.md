# Orden del Módulo: 03 - Ciclos

Este archivo define el orden en que deben aparecer los elementos en OmegaUp. Úsalo como referencia al configurar el curso en la plataforma.

La numeración de lecturas continúa desde el módulo 02 (que terminó en L26).

---

## Leccion

Lecturas y lecciones-problema intercaladas, en orden.

| # | Elemento | Descripción |
|---|----------|-------------|
| 1 | **L27 - Ciclos** | El `while`: repetir mientras se cumpla una condición. Motivación: rebote de pelota. Ciclos infinitos. |
| 2 | **LECCIÓN 11 - Yu-Gi-Oh** | Duplicar vida hasta superar al rival. Primer problema con `while`. |
| 3 | **L28 - Ciclos Controlados** | El `for`: repetir N veces. Variable contadora, localidad de variables. |
| 4 | **LECCIÓN 12 - Del Cero al N** | Imprimir todos los números de 0 a N-1. |
| 5 | **L29 - Pérdida de Memoria** | Acumuladores, mínimo/máximo: resolver sin guardar toda la lista. |
| 6 | **L30 - N Entradas** | El patrón: leer N primero, luego N datos en un for. Formaliza lo que ya se vio en L29. |
| 7 | **LECCIÓN 13 - El Filtro** | Contar cuántos números de una lista son menores a K. |
| 8 | **L31 - Ciclos Anidados** | Un ciclo dentro de otro. Rectángulo de asteriscos. Nombres i/j. |
| 9 | **LECCIÓN 14 - La Pirámide** | Media pirámide de asteriscos: ciclo exterior controla filas, interior usa i. |
| 10 | **L32 - Más de Ciclos** | El optimizador `ios_base::sync_with_stdio(0); cin.tie(0)`. Plantilla definitiva. |
| 11 | **LECCIÓN 15 - Sin Signo** | Valor absoluto de N números: salida múltiple con el optimizador. |
| 12 | **L33 - Atajos de Ciclos** | While sin llaves, for sin llaves, `while(N--)`. Reconocerlos en código ajeno. |

---

## Tarea

Problemas independientes, en orden de dificultad creciente (tipo cognitivo 1→4).

| # | Elemento | Alias | Tipo | Descripción |
|---|----------|-------|------|-------------|
| 1 | **Contando Participantes** | T13 | Tipo 1 | Dado N edades y rango [a,b], contar cuántos están dentro. Transferencia directa de acumuladores. |
| 2 | **Numeros Ordenados** | T14 | Tipo 2 | Dada una secuencia, determinar si está ordenada (no decreciente). Comparación de adyacentes. |
| 3 | **Divisores** | T15 | Tipo 2 | Dado N, imprimir todos sus divisores en orden. Requiere pensar cuándo un número divide a otro. |
| 4 | **Secuencia Fibonacci** | T16 | Tipo 3 | Dado N, imprimir el N-ésimo término de Fibonacci. Acumulación con dos variables. |
| 5 | **Pokemon Frecuente** | T17 | Tipo 3 | Lista ordenada de pokémon, encontrar el más frecuente (menor en empate). Tracking de rachas. |
| 6 | **Numeros Primos** | T18 | Tipo 3-4 | Imprimir todos los primos hasta N. Requiere ciclos anidados: externo itera candidatos, interno verifica divisores. |
