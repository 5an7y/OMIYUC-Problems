import random

for i in range(1, 13):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    N = int(random.randrange(1, 101))
    ar = [int(random.randrange(1, 1001)) for _ in range(N)]

    input.write(f"{N}\n")
    for xi in ar:
        input.write(f"{xi} ")

    for xi in ar[::2]:
        output.write(f"{xi} ")
    output.write("\n")
    for xi in ar[1::2]:
        output.write(f"{xi} ")

    input.close()
    output.close()