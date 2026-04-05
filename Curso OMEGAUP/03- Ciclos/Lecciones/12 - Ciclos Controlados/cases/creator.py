import random

for i in range(1, 11):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    N = random.randrange(1, 10 ** 5)

    input.write(f"{N}")

    for i in range(N) :
        output.write(f"{i} ")

    input.close()
    output.close()