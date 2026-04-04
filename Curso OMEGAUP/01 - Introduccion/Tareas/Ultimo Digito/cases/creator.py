import random

for i in range(1, 11):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    a = int(random.randrange(1, 11, 1) * random.random() * ( 10 ** random.randrange(1, 6, 1) ))
    b = a % 10
    c = a // 10

    input.write(f"{a}")
    output.write(f"{c} {b}")

    input.close()
    output.close()