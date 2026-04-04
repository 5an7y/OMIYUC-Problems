from numpy.random import randint
from random import shuffle
import numpy as np

def mrandint(a, b, size = None):
    if size is None:
        return randint(a, b + 1)
    else:
        return randint(a, b + 1, size)

def solver(a, output):
    if a % 400 == 0:
        output.write("Si")
    elif a % 100 == 0:
        output.write("No")
    elif a % 4 == 0:
        output.write("Si")
    else:
        output.write("No")

for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    if i == 0:
        a = 8793
    elif i == 1:
        a = 800
    elif i == 2:
        a = 87300
    else:
        a = 9024

    input.write(f"{a}")
    solver(a, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    if i % 4 == 0:
        a = 4 * randint(1, 1e5 // 4) - randint(1, 3)
    elif i % 4 == 1:
        a = 4 * randint(0, 1e5 // 4)
    elif i % 4 == 2:
        a = 400 * randint(1, 1e5 // 400) - 100 * randint(1, 3)
    else:
        a = 400 * randint(1, 1e5 // 400)
    
    input.write(f"{a}")
    solver(a, output)

    input.close()
    output.close()