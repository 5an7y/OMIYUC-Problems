import random

for i in range(1, 13):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    N = int(random.randrange(1, 101))

    input.write(f"{N}")

    for i in range(N):
        output.write("*" * (i+1) + "\n")

    input.close()
    output.close()