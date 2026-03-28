# CLAUDE.md — Guía de conocimiento para la IA

Este archivo es leído automáticamente por Claude Code al inicio de cada conversación. Contiene todo el conocimiento acumulado sobre este repositorio: contexto, convenciones, estructura, y decisiones pedagógicas. **Debe mantenerse vivo:** actualízalo cuando aprendas algo nuevo relevante.

---

## Contexto del proyecto

Este repositorio contiene los **problemas de programación competitiva de la Olimpiada Mexicana de Informática en Yucatán (OMI Yucatán)**. Los problemas se suben a la plataforma [OmegaUp](https://omegaup.com) para que los estudiantes puedan practicar.

Los problemas están organizados por fases temáticas, siguiendo el plan de estudios de OMI Yucatán documentado en Notion ("Temas OMI Yucatan"). Las clases de la olimpiada usan estos problemas para entrenar a estudiantes de secundaria y preparatoria.

Para crear y probar problemas, este repositorio depende de la herramienta **OmegaUp-Toolkit**: https://github.com/5an7y/OmegaUp-Toolkit

---

## Configuración del toolkit

Clona el toolkit en cualquier lugar de tu máquina:
```bash
git clone https://github.com/5an7y/OmegaUp-Toolkit.git
```

Luego usa sus scripts apuntando a carpetas dentro de este repositorio. Ejemplo:
```bash
# Desde el directorio del toolkit:
python GenerateCases.py /ruta/a/OMIYUC-Problems/01_IntroduccionProgramacion/02_Ciclos/ThanosSort
python TestCases.py /ruta/a/OMIYUC-Problems/04_ProgramacionCompetitiva/04_DP/LIS
```

Opcionalmente, crea un `local_config.json` en el toolkit para configurar tu compilador local.

---

## Estructura del repositorio

```
OMIYUC-Problems/
├── 01_IntroduccionProgramacion/
│   ├── 01_Condicionales/
│   ├── 02_Ciclos/
│   ├── 03_Arreglos/
│   └── 04_Strings/
├── 02_PrimerosPasosAlgoritmia/
│   ├── 01_Matematicas/
│   ├── 02_Greedy/
│   └── 03_TecnicasBasicas/       # Binary search, two pointers, sliding window, cubeta
├── 03_AlgoritmosEstructurasDatos/
│   ├── 01_EstructurasDatos/      # Stack, queue, deque, monotone stack (manual)
│   ├── 02_TeoriaNumeros/
│   ├── 03_ObjetosLibreria/       # STL: map, set, priority_queue, etc.
│   ├── 04_TecnicasBasicasII/     # Prefix arrays, update points, sweep line
│   └── 05_Ordenamientos/
├── 04_ProgramacionCompetitiva/
│   ├── 01_Backtracking/
│   ├── 02_Interactivos/
│   ├── 03_Grafos/                # BFS, DFS
│   └── 04_DP/
├── 05_TemasEspecializados/
│   ├── 01_Combinatoria/
│   ├── 02_AlgoritmosGrafos/      # Dijkstra, etc.
│   ├── 03_SegmentTree/
│   ├── 04_AlgoritmosArboles/
│   └── 05_DivideYVenceras/
├── _Recursos/                    # Editoriales, PDFs, imágenes de concursos
├── CheatSheets/                  # Guías de referencia para algoritmos
└── explicaciones/                # Explicaciones adicionales de técnicas
```

---

## Estructura de cada problema

```
MiProblema/
├── case_generator.cpp    # Genera los casos de prueba (usa toolkit Libs/)
├── cases.arg             # Argumentos para cada caso (uno por línea)
├── cases/                # Archivos .in y .out generados
├── solution/
│   ├── solution.cpp      # Solución de referencia (puede haber múltiples)
│   └── editorial.md      # (opcional) Editorial del problema
├── statements/
│   └── es.markdown       # Enunciado en formato OmegaUp
└── testplan              # (opcional) Pesos por grupos de casos
```

---

## Clasificación de problemas por tema

Los problemas se clasifican por el **tema máximo** requerido para obtener el 100%. La referencia de fases/temas está en Notion: "Temas OMI Yucatan".

**Regla clave:** si la solución de fuerza bruta entra dentro del tiempo límite dado los constraints del problema, el problema se clasifica en la categoría más básica que permita esa solución.

- Ejemplo: `ActualizacionRangos` con N,Q ≤ 100 → O(N·Q) = 10,000 ops → cabe en 1 seg → **Arreglos**, no TecnicasBasicasII.
- Si N,Q ≤ 10⁵ con el mismo problema → entonces sí va en TecnicasBasicasII.

Un problema puede requerir múltiples temas; siempre se clasifica por el más avanzado necesario para el 100%.

---

## Formato del enunciado: `statements/es.markdown`

OmegaUp usa un formato Markdown especial. Las fórmulas van entre `$...$` (LaTeX inline).

```markdown
# Historia

Contexto narrativo opcional (referencias a Yucatán, personajes conocidos, etc.)

# Problema

Descripción concisa y precisa del problema.

# Entrada

Descripción de la entrada.

# Salida

Descripción exacta de qué debe imprimir el programa.

# Ejemplos

||input
2
1 3
||output
4
||description
Descripción opcional del caso.
||end

# Limites

- $1 \leq N \leq 10^5$

**Para un 20% de los casos**

- $1 \leq N \leq 100$
```

---

## Flujo de trabajo para crear un problema nuevo

1. **Crear la estructura** (desde el toolkit):
   ```bash
   python CreateProblem.py /ruta/OMIYUC-Problems/FASE/TEMA/NombreProblema
   ```

2. **Escribir el enunciado** en `statements/es.markdown`.

3. **Diseñar los casos** en `cases.arg`.

4. **Implementar** `case_generator.cpp` y `solution/solution.cpp`.

5. **Generar los casos:**
   ```bash
   python GenerateCases.py /ruta/OMIYUC-Problems/FASE/TEMA/NombreProblema --use_solution
   ```

6. **Verificar:**
   ```bash
   python TestCases.py /ruta/OMIYUC-Problems/FASE/TEMA/NombreProblema
   ```

---

## Diseño pedagógico

Los problemas están pensados para estudiantes de secundaria/preparatoria que aprenden programación competitiva:

- **Historia:** Dar contexto local o divertido (referencias a Yucatán, nombres conocidos) hace los problemas más accesibles.
- **Subtareas:** Diseñar casos que permitan soluciones parciales (fuerza bruta para 20%, solución completa para 100%) ayuda a estudiantes de todos los niveles.
- **Claridad:** El enunciado debe ser preciso y sin ambigüedades. Los ejemplos deben cubrir casos representativos.
- **Casos borde:** Siempre incluir N=1, valores mínimos, valores máximos, y casos especiales.
- **Nombres:** Los problemas se nombran en `CamelCase` descriptivo, en español.

---

## Recursos de concursos

La carpeta `_Recursos/` contiene editoriales, PDFs e imágenes de concursos pasados de OMI Yucatán, útiles como referencia para crear nuevos problemas de nivel similar.

---

## Cómo mantener este archivo

Actualiza este archivo cuando:
- Se decida una nueva convención de nomenclatura o clasificación
- Se añadan nuevas fases o temas al plan de estudios
- Se aprenda un nuevo patrón para diseñar casos o enunciados
- Se tome una decisión pedagógica importante
