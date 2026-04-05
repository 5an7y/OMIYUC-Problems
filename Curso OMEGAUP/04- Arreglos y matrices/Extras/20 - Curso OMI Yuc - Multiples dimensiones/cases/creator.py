import random
import numpy as np

for i in range(1, 13):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    N = int(random.randrange(1, 10))
    M = int(random.randrange(1, 20))
    mats = np.random.randint(0, 101, size=(N, M, M))

    input.write(f"{N} {M}\n")

    for mat in mats:
        for a in mat:
            for ai in a:
                input.write(f"{ai} ")
            input.write("\n")
        input.write("\n")

    for mat in mats:
        if mat[0][0] % 2 == 1:
            continue

        for a in mat:
            for ai in a:
                output.write(f"{ai} ")
            output.write("\n")
        output.write("\n")

    for mat in mats:
        if mat[0][0] % 2 == 0:
            continue

        for a in mat:
            for ai in a:
                output.write(f"{ai} ")
            output.write("\n")
        output.write("\n")

    input.close()
    output.close()