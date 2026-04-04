# Orden del Módulo: 01 - Introduccion

Este archivo define el orden en que deben aparecer los elementos en OmegaUp. Úsalo como referencia al configurar el curso en la plataforma.

La numeración de lecturas continúa desde el módulo 00 (que terminó en L06).

---

## Leccion

Lecturas y lecciones-problema intercaladas, en orden.

| # | Elemento | Descripción |
|---|----------|-------------|
| 1 | **L07 - Imprimir** | Aprende `cout`, `\n` y cómo encadenar `<<` para mostrar texto y números. |
| 2 | **L08 - Enviar en OmegaUp** | Cómo hacer un envío en la plataforma. Va ANTES del primer problema para que el estudiante sepa qué va a pasar cuando lo haga. |
| 3 | **LECCIÓN 01 - Adios Mundo** | Primer envío: imprimir "Adios\nMundo!" en dos líneas. Sin entrada, sin variables — valida que el entorno y el flujo de envío funcionan. |
| 4 | **L09 - Declarar Variables** | Variables `int`: qué son, cómo nombrarlas, por qué se declaran global en competencias. |
| 5 | **L10 - Operaciones con Variables** | Asignación (`=`), las cuatro operaciones aritméticas, división entera con truncamiento. |
| 6 | **L11 - Jerarquia de Operaciones** | Prioridad de operadores, uso de paréntesis, error clásico de `(a+b)/2` vs `a+b/2`. |
| 7 | **LECCIÓN 02 - Variables Enteras** | Calcula una fórmula con valores hardcodeados. Cierra el bloque de variables + operaciones + jerarquía con práctica real antes del Debugger. |
| 8 | **L12 - Debugger [Solo CodeChef]** | Cómo usar el visualizador paso a paso de CodeChef para ver variables cambiar línea por línea. |
| 9 | **L13 - Modulo** | El operador `%`: qué es el residuo, propiedades clave, detección de pares y múltiplos. |
| 10 | **LECCIÓN 03 - Modulo** | Calcula una fórmula con `%` usando valores hardcodeados. Consolida jerarquía de operadores con módulo. |
| 11 | **L14 - Leer Datos** | Introduce `cin`. Los programas dejan de tener valores fijos y se vuelven generales. Incluye tabla de cómo dar entrada en cada editor. |
| 12 | **L15 - Evaluador OmegaUp** | Cómo funciona la evaluación automática: casos de prueba, no hardcodear, no imprimir texto extra. |
| 13 | **LECCIÓN 04 - Modulo Dos Numeros** | Primer problema con `cin`: lee `a` y `b`, imprime `a%b`. Usa todo lo aprendido en un programa general. |
| 14 | **L16 - Tipos de Variables** | Overflow demostrado con ejemplo que da número negativo. Tabla de tipos: `int`, `long long`, `double`, `char`. |
| 15 | **LECCIÓN 05 - Multiplicacion Grande** | Lee dos enteros hasta 100,000. Imprime su producto. El estudiante debe notar que 100000×100000 = 10^10 no cabe en `int` y usar `long long`. |
| 16 | **L17 - Operadores Compuestos** | Operadores compuestos: `+=`, `-=`, `*=`, `/=`, `%=`. También `++` y `--`. Se enseña al final para no sobrecargar cuando el estudiante apenas aprende operaciones. |

---

## Tarea

Problemas independientes, en orden de dificultad creciente.

| # | Elemento | Descripción |
|---|----------|-------------|
| 1 | **Pegando Numeros** (T1) | Tipo 1 — Dados `a` y `b`, imprimir `ab` pegados (`cout << a << b`). Solo `cout`, sin operaciones reales. La más accesible. |
| 2 | **Operaciones Aritmeticas** (T2) | Tipo 2 — Dados `a`,`b` imprimir suma, resta, mult, div entera y módulo. Requiere `long long` para la multiplicación (`a,b ≤ 10^6`, mult puede dar `10^12`). |
| 3 | **Puntos de Torneo** (T3) | Tipo 2 — Dados victorias, empates y derrotas, calcular puntaje total (v×3 + e×1). Misma estructura que Operaciones Aritméticas, contexto de torneo. |
| 4 | **Ultimo Digito** (T4) | Tipo 3 — Dado `n`, imprimir el número sin su último dígito y el último dígito por separado. Aplica `/10` y `%10` de forma no obvia. |
| 5 | **Repartir Galletas** (T5) | Tipo 3 — Dados galletas y amigos, el mejor amigo recibe `galletas/amigos + galletas%amigos`. Combina división y módulo en modelado real. |
| 6 | **Conversion de Tiempo** (T6) | Tipo 4 — Dado un número de segundos `S`, imprimir cuántas horas, minutos y segundos son. Requiere diseñar un algoritmo en cascada. |
