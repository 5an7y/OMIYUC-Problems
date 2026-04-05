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
| 6 | **LECCIÓN 13 - El Filtro** | Contar cuántos de los 10 amigos calificaron la película por debajo de K. Cantidad fija: usa solo lo de L29. |
| 7 | **L30 - N Entradas** | El patrón: leer N primero, luego N datos en un for. Formaliza lo que ya se vio en L29. |
| 8 | **LECCIÓN 14 - El más alto** | N alturas, encontrar la mayor. Combina max (L29) + cin>>N (L30). |
| 9 | **L31 - Multi Entrada/Salida** | cin y cout dentro del mismo for: un resultado por cada entrada. |
| 10 | **LECCIÓN 15 - Sin Signo** | Árbitro de fútbol: valor absoluto de N diferencias de goles. Aplica patrón de L31. |
| 11 | **L32 - Ciclos Anidados** | Un ciclo dentro de otro. Rectángulo de asteriscos. Nombres i/j. Triángulo. |
| 12 | **LECCIÓN 16 - La Tabla** | Tabla de multiplicar NxN: ciclo exterior controla fila i, interior calcula i×j. |
| 13 | **L33 - Ciclos sin llaves** | While y for sin llaves. Reconocerlos en código ajeno. |

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
