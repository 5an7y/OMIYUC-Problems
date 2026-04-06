import random

for i in range(1, 13):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    N = int(random.randrange(1, 11))
    M = int(random.randrange(1, 11))
    pixeles = [[int(random.randrange(0, 10)) for _ in range(M) ] for _ in range(N)]

    input.write(f"{N} {M}\n")

    for ai in pixeles:
        for pi in ai:
            input.write(f"{pi} ")
        input.write("\n")
    
    for ai in pixeles[-1::-1]:
        for pi in ai:
            output.write(f"{pi} ")
        output.write("\n")

    input.close()
    output.close()