from numpy.random import randint
from random import shuffle
import numpy as np

def mrandint(a, b, size = None):
    if size is None:
        return randint(a, b + 1)
    else:
        return randint(a, b + 1, size)

def solver(a, b, c, d, output):
    if b < c or d < a:
        output.write("No")
    else:
        output.write("Si")

for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    if i == 0:
        a, b, c, d = 1, 4, 1, 4
    elif i == 1:
        a, b, c, d = 1, 10, 4, 6
    elif i == 2:
        a, b, c, d = 1, 2, 3, 4
    else:
        a, b, c, d = 3, 4, 1, 2

    input.write(f"{a} {b} {c} {d}")
    solver(a, b, c, d, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    aux = mrandint(1, 1e6, 4)
    aux = np.sort(aux)
    if i % 6 == 0:
        a, b, c, d = aux
    elif i % 6 == 1:
        c, d, a, b = aux
    elif i % 6 == 2:
        a, c, d, b = aux
    elif i % 6 == 3:
        c, a, b, d = aux
    elif i % 6 == 4:
        a, c, b, d = aux
    elif i % 6 == 5:
        c, a, d, b = aux
    
    input.write(f"{a} {b} {c} {d}")
    solver(a, b, c, d, output)

    input.close()
    output.close()