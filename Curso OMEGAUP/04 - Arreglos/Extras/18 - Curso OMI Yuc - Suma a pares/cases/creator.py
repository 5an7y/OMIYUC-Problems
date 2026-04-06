import random

for i in range(1, 13):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    N = 2 * int(random.randrange(1, 101))
    ar = [int(random.randrange(1, 101)) for _ in range(N)]
    input.write(f"{N}\n")
    for xi in ar:
        input.write(f"{xi} ")
    
    for i in range(N // 2):
        output.write(f"{ar[2 * i] + ar[2 * i + 1]} ")

    input.close()
    output.close()