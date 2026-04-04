import random

for i in range(1, 11):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    a = int(random.randrange(1, 11, 1) * random.random() * ( 10 ** random.randrange(0, 6, 1) ))
    b = int(random.randrange(1, 11, 1) * random.random() * ( 10 ** random.randrange(0, 6, 1) ))

    input.write(f"{a} {b}")
    output.write(f"{a}{b}")

    input.close()
    output.close()