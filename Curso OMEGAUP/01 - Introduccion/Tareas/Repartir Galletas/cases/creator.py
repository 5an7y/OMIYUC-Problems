import random

for i in range(1, 11):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    a = int(random.randrange(1, 11, 1) * random.random() * ( 10 ** random.randrange(1, 6, 1) ))
    c = int(random.randrange(1, a // 2, 1))
    b = a % c + a // c

    input.write(f"{a} {c}")
    output.write(f"{b}")

    input.close()
    output.close()