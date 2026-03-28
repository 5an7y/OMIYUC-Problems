# OMIYUC-Problems

Banco de problemas de programación competitiva de la **Olimpiada Mexicana de Informática en Yucatán (OMI Yucatán)**.

Los problemas están organizados por fases temáticas y se publican en [OmegaUp](https://omegaup.com). Creados y mantenidos por [5an7y](https://omegaup.com/profile/5an7y/), entrenador de OMI Yucatán.

## Prerrequisitos

Para crear y probar problemas, clona el toolkit:

```bash
git clone https://github.com/5an7y/OmegaUp-Toolkit.git
```

Requisitos: Python 3, g++ (con soporte C++20).

## Estructura

```
01_IntroduccionProgramacion/    Condicionales, Ciclos, Arreglos, Strings
02_PrimerosPasosAlgoritmia/     Matemáticas, Greedy, Técnicas Básicas
03_AlgoritmosEstructurasDatos/  Estructuras, Teoría de Números, STL, Técnicas II, Ordenamientos
04_ProgramacionCompetitiva/     Backtracking, Interactivos, Grafos, DP
05_TemasEspecializados/         Combinatoria, Dijkstra, Segment Tree, Árboles, D&C
_Recursos/                      Editoriales y materiales de concursos pasados
CheatSheets/                    Guías de referencia
```

## Uso

```bash
# Generar casos de prueba
python /ruta/OmegaUp-Toolkit/GenerateCases.py 04_ProgramacionCompetitiva/04_DP/LIS --use_solution

# Probar soluciones
python /ruta/OmegaUp-Toolkit/TestCases.py 04_ProgramacionCompetitiva/04_DP/LIS

# Crear un problema nuevo
python /ruta/OmegaUp-Toolkit/CreateProblem.py 01_IntroduccionProgramacion/02_Ciclos/MiProblema
```
