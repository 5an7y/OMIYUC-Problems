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

def solver(nums, output):
    ans = ant = nums[0]
    max_frec = 1
    frec_act = 1

    for xi in nums[1:]:
        if xi == ant:
            frec_act += 1
        else:
            if frec_act > max_frec:
                max_frec = frec_act
                ans = ant
            frec_act = 1
        ant = xi

    if frec_act > max_frec:
        max_frec = frec_act
        ans = ant

    output.write(f"{ans}")

for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    N = mrandint(1, 100)
    nums = np.sort(mrandint(1, 10, N))

    input.write(f"{N}\n")
    print_list(nums, input)
    solver(nums, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    N = mrandint(1, 1e5)
    nums = np.sort(mrandint(1, 1000, N))

    input.write(f"{N}\n")
    print_list(nums, input)
    solver(nums, output)

    input.close()
    output.close()