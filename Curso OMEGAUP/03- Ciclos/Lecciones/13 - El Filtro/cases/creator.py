import random

for i in range(1, 13):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    N = random.randrange(1, 10 ** 5 + 1)
    K = random.randrange(1, 10 ** 5 + 1)    
    mini = 1 if i > 1 else K
    Num = [ random.randrange(mini, 10 ** 5 + 1) for _ in range(N) ]
    menores_k = sum( int(x < K) for x in Num )

    input.write(f"{N} {K}\n")
    for xi in Num:
        input.write(f"{xi} ")
    
    output.write(f"{menores_k}")

    input.close()
    output.close()