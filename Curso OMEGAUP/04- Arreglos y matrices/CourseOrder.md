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
| 1 | **L34 — ¿Por qué arreglos?** | Pain point: los acumuladores de L29 no siempre alcanzan. Motivación con el problema de imprimir en reversa. Curiosity gap. Sin sintaxis. |
| 2 | **L35 — Declaración y acceso** | `int arr[100]`, índices desde 0, out-of-bounds, A+B con arreglo. Declarar con tamaño fijo al máximo. |
| 3 | **L36 — Recorriendo arreglos** | Patrón `for(i<N) cin>>arr[i]`, impresión normal e inversa. Código completo. Error común: `i<=N`. |
| 4 | **LECCIÓN 17 — Canciones lentas y rápidas** | Umbral K dado: separar en dos listas (menores que K / mayores o iguales). Primera victoria con arreglos. |
| 5 | **L37 — Dos pasadas con arreglos** | Cuándo el umbral se computa de los datos. Patrón: acumula en pass 1, clasifica en pass 2. División entera explícita. |
| 6 | **LECCIÓN 18 — Por encima del promedio** | N calificaciones: promedio floor, imprimir las que están por encima, luego las demás. Requiere dos pasadas. |
| 7 | **L38 — Matrices** | De 1D a 2D, `int mat[N][M]`, ciclos anidados para leer e imprimir, límite N×M ≤ 10⁶. |
| 8 | **LECCIÓN 19 — Píxeles invertidos** | Aplicación de L38: leer N×M, imprimir filas de abajo hacia arriba. |
| 9 | **L39 — Recorridos especiales de arreglo** | Índice con saltos (`i+=2`), mapeo matemático (`arr[2i]`, `arr[2i+1]`). Dos soluciones equivalentes. |
| 10 | **LECCIÓN 20 — Puntos por pareja** | Aplicación de L39: N jugadores en parejas consecutivas, imprimir suma de cada par. |
| 11 | **L40 — Recorridos especiales de matriz** | Recorrido por columnas (outer=j, inner=i), recorrido serpentina (dirección alterna por fila). |
| 12 | **LECCIÓN 21 — El pase de lista** | Aplicación de L40: imprimir N×M en orden columna-por-columna. |

---

## Tarea

Problemas independientes, en orden de dificultad creciente (tipo cognitivo 1→4).

| # | Elemento | Alias | Tipo | Descripción |
|---|----------|-------|------|-------------|
| 1 | **Pares e impares** | T19 | Tipo 1 | Dado N números, separar por valor (pares/impares) en dos líneas. Transferencia directa de L36. |
| 2 | **Girando en círculo** | T20 | Tipo 2 | Rotar arreglo K posiciones a la derecha. Primer problema de reorganizar un arreglo. |
| 3 | **Matriz serpentina** | T21 | Tipo 2-3 | Imprimir N×M en orden serpentina (filas alternas). Aplica L40. |
| 4 | **Promedios totales** | T22 | Tipo 3 | N materias × M estudiantes, calcular promedio por estudiante (columna). Requiere recorrido por columnas. |
| 5 | **Rotar matrices** | T23 | Tipo 4 | Rotar N×M 90° antihorario. Transformación geométrica: `nueva[M-1-j][i] = mat[i][j]`. |
