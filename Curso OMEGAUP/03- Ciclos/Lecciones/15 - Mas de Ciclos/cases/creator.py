import random

for i in range(1, 13):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    N = int(random.randrange(1, 100))
    ar = [int(random.randrange(-1000, 1001)) for _ in range(N)]
    input.write(f"{N}\n")
    for xi in ar:
        input.write(f"{xi} ")
        output.write(f"{abs(xi)} ")

    input.close()
    output.close()