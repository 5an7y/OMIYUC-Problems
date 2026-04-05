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

def solver(N, lista, output):
    si = True
    for i in range(N - 1):
        if lista[i] > lista[i + 1]:
            si = False
            break
    if si:
        output.write("Si")
    else: 
        output.write("No")


for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    N = mrandint(1, 100)
    nums = mrandint(1, 100, N)

    if i % 2 == 0:
        nums = np.sort(nums)

    input.write(f"{N}\n")
    print_list(nums, input)
    solver(N, nums, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    N = mrandint(1, 1e5)
    nums = mrandint(1, 1e5, N)

    if i % 2 == 0:
        nums = np.sort(nums)

    input.write(f"{N}\n")
    print_list(nums, input)
    solver(N, nums, output)

    input.close()
    output.close()