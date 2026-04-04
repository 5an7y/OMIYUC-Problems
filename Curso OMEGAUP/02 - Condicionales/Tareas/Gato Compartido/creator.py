from numpy.random import randint
from random import shuffle

def mrandint(a, b, size = None):
    if size is None:
        return randint(a, b + 1)
    else:
        return randint(a, b + 1, size)

def solver(a, b, c, output):
    mit = (a + b) / 2
    if c <= mit:
        output.write("Santiago")
    else:
        output.write("Paulina")

for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    if i == 0:
        a, b, c = 2, 4, 3
    elif i == 1:
        a, b, c = 1, 10, 10
    elif i == 2:
        a, b, c = 1, 10, 4
    else:
        a, b, c = 1, 2, 1

    input.write(f"{a} {b} {c}")
    solver(a, b, c, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    a = mrandint(1, 1e6)
    b = mrandint(1, 1e6)
    if a > b:
        a, b = b, a
    c = mrandint(a, b)
    
    input.write(f"{a} {b} {c}")
    solver(a, b, c, output)

    input.close()
    output.close()