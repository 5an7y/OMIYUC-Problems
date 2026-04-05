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

def solver(lista, k, output):
    lista = np.concatenate((lista[k:], lista[:k]))
    print_list(lista, output)

for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    N = mrandint(1, 100)
    K = mrandint(0, N-1)
    lista = mrandint(1, 100, N)

    input.write(f"{N} {K}\n")
    print_list(lista, input)
    solver(lista, K, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    N = mrandint(1, 1e5)
    K = mrandint(0, N-1)
    lista = mrandint(1, 1e5, N)

    input.write(f"{N} {K}\n")
    print_list(lista, input)
    solver(lista, K, output)

    input.close()
    output.close()