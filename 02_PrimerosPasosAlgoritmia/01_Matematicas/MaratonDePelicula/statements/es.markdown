# Historia

Estás viendo tu **película favorita** en el reproductor de tu casa. Como ya la viste mil veces, solo te interesa volver a ver los **mejores momentos** y saltarte el resto.

El reproductor tiene **dos botones**:

1. **Ver**: ves el minuto actual de la película y el reproductor avanza al siguiente minuto.
2. **Saltar**: el reproductor avanza **exactamente $x$ minutos** sin que veas nada. Es decir, si estás en el minuto $t$, después de presionar **Saltar** quedas en el minuto $t + x$.

La película arranca en el minuto $1$. Quieres ver $N$ mejores momentos: el $i$-ésimo va del minuto $l_i$ al minuto $r_i$ (inclusivos). Los mejores momentos están ordenados de menor a mayor y **no se traslapan** ($r_i < l_{i+1}$).

# Problema

Calcula el **mínimo número de minutos** que tienes que ver para alcanzar a ver TODOS los mejores momentos completos.

# Entrada

En la primera línea, dos enteros $N$ y $x$.

En las siguientes $N$ líneas, dos enteros $l_i$ y $r_i$ separados por un espacio.

# Salida

Un único entero: el mínimo número de minutos que tienes que ver.

# Ejemplos

||input
2 3
5 6
10 12
||output
6
||description
Empiezas en el minuto $1$. Saltas a $4$ (presionando **Saltar** una vez). Ves los minutos $4, 5, 6$ ($3$ minutos vistos) y llegas al $7$. Saltas a $10$. Ves $10, 11, 12$ ($3$ minutos vistos más). Total: $6$ minutos.
||input
1 1
1 100000
||output
100000
||description
Como $x = 1$, saltar y ver son lo mismo. Tienes que ver los $100000$ minutos del rango.
||end

# Limites

- $1 \leq N \leq 1000$
- $1 \leq x \leq 10^{12}$
- $1 \leq l_i \leq r_i \leq 10^{12}$
- $r_i < l_{i+1}$ para todo $i$ de $1$ a $N - 1$.

**Para un 50% de los casos**

- $1 \leq x \leq 10^5$
- $1 \leq l_i \leq r_i \leq 10^5$
