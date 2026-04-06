import random

for i in range(1, 13):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    N = int(random.randrange(1, 16))
    mat = [[int(random.randrange(1, 101)) for _ in range(N)] for _ in range(N)]
    ini, fin = 0, N - 1

    input.write(f"{N}\n")

    for a in mat:
        for xi in a:
            input.write(f"{xi} ")
        input.write("\n")

    while ini <= fin:
        for i in range(ini, fin + 1):
            output.write(f"{mat[ini][i]} ")
        for i in range(ini + 1, fin + 1):
            output.write(f"{mat[i][fin]} ")
        for i in range(fin - 1, ini - 1, -1):
            output.write(f"{mat[fin][i]} ")
        for i in range(fin - 1, ini, -1):
            output.write(f"{mat[i][ini]} ")
        ini += 1
        fin -= 1

    input.close()
    output.close()