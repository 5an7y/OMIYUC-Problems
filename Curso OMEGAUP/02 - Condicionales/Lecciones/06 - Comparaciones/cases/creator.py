import random

for i in range(1, 13):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    a = int(random.randrange(1, 10 ** 7))
    b = int(random.randrange(1, 10 ** 7))
    a, b = max(a, b), min(a, b)

    if (i - 1) // 4 == 1:
        a, b = b, a
    elif (i - 1) // 4 == 2:
        b = a

    input.write(f"{a} {b}")

    if a > b:
        output.write(
"""a es mayor que b
a es mayor o igual que b
a es diferente que b""")
    if a == b:
        output.write(
"""a es mayor o igual que b
a es menor o igual que b
a es igual que b""")
    if a < b:
        output.write(
"""a es menor que b
a es menor o igual que b
a es diferente que b""")

    input.close()
    output.close()