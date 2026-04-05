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

def solver(a, b, lista, output):
    suma = sum (
        a <= xi and xi <= b for xi in lista
    )
    output.write(f"{suma}")


for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    N = mrandint(1, 20)
    a = mrandint(1, 100)
    b = mrandint(1, 100)
    if a > b:
        a, b = b, a
    num = mrandint(1, 100, N)

    input.write(f"{N} {a} {b}\n")
    print_list(num, input)
    solver(a, b, num, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    N = mrandint(1, 1e5)
    a = mrandint(1, 1e5)
    b = mrandint(1, 1e5)
    if a > b:
        a, b = b, a
    num = mrandint(1, 1e5, N)

    input.write(f"{N} {a} {b}\n")
    print_list(num, input)
    solver(a, b, num, output)

    input.close()
    output.close()