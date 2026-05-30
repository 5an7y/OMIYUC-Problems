# Historia

Eres **inspector de tránsito** y te llaman a revisar la configuración de los semáforos de un **crucero** de dos avenidas. El crucero tiene 4 esquinas, numeradas $1, 2, 3, 4$ en sentido **antihorario** (contra las manecillas del reloj).

En cada esquina hay tres carriles de carros que llegan al crucero (uno para los que dan vuelta a la **izquierda**, uno para los que siguen **derecho**, y uno para los que dan vuelta a la **derecha**) y un **paso peatonal**. Cada carril y cada paso peatonal tiene su propio semáforo, que puede estar en **rojo** ($0$) o en **verde** ($1$).

# Problema

Hay un **accidente posible** en la esquina $i$ si su paso peatonal está en verde ($p_i = 1$) **y al mismo tiempo** alguno de los carriles que cruzan ese paso peatonal también está en verde.

Los carriles que cruzan el paso peatonal de la esquina $i$ son:

- los tres carriles que llegan a la esquina $i$: $l_i$, $s_i$, $r_i$;
- el carril **derecho** de la esquina **opuesta** ($i + 2$): $s_{i+2}$;
- el carril **izquierda** de la esquina **siguiente** ($i + 1$): $l_{i+1}$;
- el carril **derecha** de la esquina **anterior** ($i - 1$): $r_{i-1}$.

Los índices son **cíclicos**: la esquina siguiente a $4$ es $1$, y la anterior a $1$ es $4$.

Determina si hay un accidente posible en alguna esquina.

# Entrada

La entrada tiene 4 líneas, una por cada esquina, en el orden $1, 2, 3, 4$.

Cada línea tiene 4 enteros $l$, $s$, $r$, $p$ (cada uno $0$ o $1$): los semáforos de los carriles **izquierda**, **derecho**, **derecha** y del **paso peatonal**, respectivamente.

# Salida

Imprime `SI` si hay un accidente posible en alguna esquina; `NO` en caso contrario.

# Ejemplos

||input
1 0 0 1
0 1 0 0
0 0 1 0
0 0 0 1
||output
SI
||description
En la esquina $1$, el peatón puede cruzar ($p_1 = 1$) y al mismo tiempo el carril $l_1 = 1$ deja pasar carros que dan vuelta a la izquierda. ¡Accidente!
||input
0 1 1 0
1 0 1 0
1 1 0 0
0 0 0 1
||output
NO
||description
Solo el paso peatonal de la esquina $4$ está en verde. Los carriles que lo cruzan son $l_4 = 0$, $s_4 = 0$, $r_4 = 0$, $s_2 = 0$, $l_1 = 0$, $r_3 = 0$. Todos rojos: no hay accidente.
||input
1 0 0 0
0 0 0 1
0 0 0 0
1 0 1 0
||output
NO
||end

# Limites

- Todos los valores de entrada son $0$ o $1$.

**Para un 50% de los casos**

- A lo más un $p_i$ está en verde (es decir, a lo más un paso peatonal con $p_i = 1$).
