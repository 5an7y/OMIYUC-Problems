# Orden del Módulo: 04 - Arreglos y matrices

Este archivo define el orden en que deben aparecer los elementos en OmegaUp. Úsalo como referencia al configurar el curso en la plataforma.

La numeración de lecturas continúa desde el módulo 03 (que terminó en L33).
La numeración de lecciones continúa desde el módulo 03 (que terminó en Lec16).
La numeración de tareas continúa desde el módulo 03 (que terminó en T18).

---

## Leccion

Lecturas y lecciones-problema intercaladas, en orden.

| # | Elemento | Descripción |
|---|----------|-------------|
| 1 | **L34 — ¿Por qué arreglos?** | Motivación: separar negativos/positivos. Absurdo de N variables. Curiosity gap. Sin sintaxis. |
| 2 | **L35 — Declaración y acceso** | `int arr[100]`, índices desde 0, out-of-bounds, A+B con arreglo. |
| 3 | **L36 — Recorriendo arreglos** | Patrón `for(i<N) cin>>arr[i]`, dos pasadas para negativos/positivos. Código completo. Error común `i<=N`. |
| 4 | **LECCIÓN 17 — Canciones lentas y rápidas** | Umbral K dado: separar en dos listas (lentas / rápidas). Primera victoria con arreglos. |
| 5 | **LECCIÓN 18 — Sobre el promedio** | Dos pasadas con umbral computado (promedio): imprimir los estrictamente sobre el promedio. |
| 6 | **L37 — Múltiples recorridos de un arreglo** | O(N²): para cada elemento, recorrer el arreglo completo. Ejemplo: el número solitario. |
| 7 | **LECCIÓN 19 — El complementario** | Variante del solitario: encontrar la carta sin su complementaria (suma 100). |
| 8 | **LECCIÓN 20 — El más frecuente** | Contar ocurrencias con ciclo anidado. Imprimir la frecuencia máxima. |
| 9 | **L38 — Arreglos mutables** | Los arreglos se pueden modificar en su lugar. Ejemplo: notas bajo promedio +5, imprimir reprobados. |
| 10 | **LECCIÓN 21 — Puntos extra** | K puntos extras para reprobados (redondeado hacia abajo). Imprimir los que aún reprueban. |

---

## Tarea

Problemas independientes, en orden de dificultad creciente (tipo cognitivo 1→4).

| # | Elemento | Alias | Tipo | Descripción |
|---|----------|-------|------|-------------|
| 1 | **Pares e impares** | T19 | Tipo 1 | Dado N números, separar pares/impares en dos líneas. Transferencia directa de L36. |
| 2 | **La liga de campeones** | T20 | Tipo 2 | Encontrar el máximo y separar clasificados/eliminados en dos líneas. Patrón dos pasadas. |
| 3 | **El maestro estricto** | T21 | Tipo 2-3 | Dos arreglos paralelos (puntos + tardanza). Modificar puntos si tardanza > 30. Arreglos mutables + ligar información. |
| 4 | **Folios duplicados** | T22 | Tipo 3 | Imprimir folios que aparecen más de una vez, en orden de primera aparición. O(N²). |
| 5 | **Girando en círculo** | T23 | Tipo 3 | Rotar arreglo K posiciones a la derecha. Reorganizar un arreglo. |
| 6 | **Las dos rondas** | T24 | Tipo 4 | Dos arreglos de entrada, calcular promedio individual, filtrar sobre el promedio del grupo. El más completo del módulo. |
