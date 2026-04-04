from numpy.random import randint
from random import shuffle

def mrandint(a, b, size = None):
    if size is None:
        return randint(a, b + 1)
    else:
        return randint(a, b + 1, size)

def solver(a, b, c, output):
    if b % a == 0 and c % a == 0:
        output.write(str(a))
    elif a % b == 0 and c % b == 0:
        output.write(str(b))
    elif a % c == 0 and b % c == 0:
        output.write(str(c))
    else:
        output.write(str(-1))

for i in range(0, 4):
    input  = open(f"examples/{i}.in", "w")
    output = open(f"examples/{i}.out", "w")

    if i == 0:
        a, b, c = 2, 4, 8
    elif i == 1:
        a, b, c = 10, 10, 10
    elif i == 2:
        a, b, c = 9, 7, 8
    else:
        a, b, c = 125, 25, 250

    input.write(f"{a} {b} {c}")
    solver(a, b, c, output)

    input.close()
    output.close()

for i in range(1, 13):
    input  = open(f"cases/{i}.in", "w")
    output = open(f"cases/{i}.out", "w")

    if i % 4 == 0:
        a, b, c = mrandint(1, 1e6, 3)
    elif i % 5 == 0:
        a = b = c = mrandint(1, 1e6)
    else:
        a = mrandint(1, 1e5)
        b = mrandint(1, 1e6 // a) * a
        c = mrandint(1, 1e6 // a) * a
        aux = [a, b, c]
        shuffle(aux)
        a, b, c = aux
    
    input.write(f"{a} {b} {c}")
    solver(a, b, c, output)

    input.close()
    output.close()