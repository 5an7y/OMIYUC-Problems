import random

for i in range(1, 13):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    O = i % 4 + 1
    a = random.randrange(-10**5, 10**5 + 1)
    b = random.randrange(-10**5, 10**5 + 1)
    
    input.write(f"{O} {a} {b}")

    res = 0
    if O == 1:
        res = max(a, b)
    elif O == 2:
        res = min(a, b)
    elif O == 3:
        res = min(a + b, a - b)
    else:
        res = max(a + b, a - b)

    output.write(f"{res}")

    input.close()
    output.close()