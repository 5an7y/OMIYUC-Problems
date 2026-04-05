import random

for i in range(1, 11):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    a = int(random.randrange(1, 10 ** 7))
    b = int(random.randrange(1, 10 ** 7))

    input.write(f"{a} {b}")

    while a <= b: a *= 2

    output.write(f"{a}")

    input.close()
    output.close()