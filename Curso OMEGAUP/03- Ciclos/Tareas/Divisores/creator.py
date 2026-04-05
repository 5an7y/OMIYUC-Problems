from numpy.random import randint
from random import shuffle
import numpy as np

def mrandint(a, b, size = None):
    if size is None:
        return randint(a, b + 1)
    else:
        return randint(a, b + 1, size)

def print_list(lista, output):
    for xi in lista:
        output.write(f"{xi} ")

def solver(N, output):
    divs = []
    for i in range(1, N + 1):
        if N % i == 0:
            divs.append(i)
    print_list(divs, output)


for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    N = mrandint(1, 100)

    input.write(f"{N}")
    solver(N, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    N = mrandint(1, 1e6)
    if i == 1:
        N = 1

    input.write(f"{N}")
    solver(N, output)

    input.close()
    output.close()