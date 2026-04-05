from numpy.random import randint
from random import shuffle
import numpy as np

def mrandint(a, b, size = None):
    if size is None:
        return randint(a, b + 1)
    else:
        return randint(a, b + 1, size)

def solver(N, output):
    fib = [0] * N
    if N > 1:
        fib[1] = 1

    for i in range(2, N):
        fib[i] = fib[i - 1] + fib[i - 2]
    print(fib, N)
    output.write(f"{fib[N-1]}")

for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    if i == 0:
        N = 1
    elif i == 1:
        N = 2
    elif i == 2:
        N = 20
    else:
        N = 60

    input.write(f"{N}")
    solver(N, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    N = mrandint(1, 60)
    
    input.write(f"{N}")
    solver(N, output)

    input.close()
    output.close()