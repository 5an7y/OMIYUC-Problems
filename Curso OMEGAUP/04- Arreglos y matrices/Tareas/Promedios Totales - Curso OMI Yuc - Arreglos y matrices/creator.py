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

def solver(mat, output):
    N, M = mat.shape
    promedios = np.zeros(M, dtype= np.int64)

    for materia in mat:
        for i, cal in enumerate(materia):
            promedios[i] += cal
    
    for i in range(M):
        promedios[i] //= N

    print_list(promedios, output)

for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    N = mrandint(1, 10)
    M = mrandint(1, 10)
    mat = mrandint(1, 100, (N, M))

    input.write(f"{N} {M}\n")
    print_mat(mat, input)
    solver(mat, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    N = mrandint(1, 1e3)
    M = mrandint(1, 1e3)
    mat = mrandint(1, 100, (N, M))

    input.write(f"{N} {M}\n")
    print_mat(mat, input)
    solver(mat, output)

    input.close()
    output.close()