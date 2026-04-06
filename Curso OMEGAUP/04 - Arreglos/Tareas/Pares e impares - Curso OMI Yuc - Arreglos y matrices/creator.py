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

def print_mat(mat, output):
    for lista in mat:
        print_list(lista, output)
        output.write("\n")

def solver(lista, output):
    pares = []
    impares = []

    for xi in lista:
        if xi % 2 == 0:
            pares.append(xi)
        else:
            impares.append(xi)

    print_list(pares, output)
    output.write("\n")
    print_list(impares, output)

for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    N = mrandint(1, 100)
    lista = mrandint(1, 100, N)

    input.write(f"{N}\n")
    print_list(lista, input)
    solver(lista, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    N = mrandint(1, 1e5)
    lista = mrandint(1, 1e4, N)

    input.write(f"{N}\n")
    print_list(lista, input)
    solver(lista, output)

    input.close()
    output.close()