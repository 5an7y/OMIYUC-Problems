from numpy.random import randint
from random import shuffle
import numpy as np

def mrandint(a, b, size = None):
    if size is None:
        return randint(a, b + 1)
    else:
        return randint(a, b + 1, size)

def solver(a, b, c, output):
    a, b, c = np.sort([a, b, c])
    output.write(f"{a} {b} {c}")

for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    if i == 0:
        a, b, c = 1, 2, 3
    elif i == 1:
        a, b, c = 3, 2, 1
    elif i == 2:
        a, b, c = 2, 3, 1
    else:
        a, b, c = 1, 3, 2

    input.write(f"{a} {b} {c}")
    solver(a, b, c, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    a, b, c = mrandint(-100, 100, 3)
    
    input.write(f"{a} {b} {c}")
    solver(a, b, c, output)

    input.close()
    output.close()