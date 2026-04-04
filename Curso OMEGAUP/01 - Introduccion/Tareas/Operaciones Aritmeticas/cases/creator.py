import random

for i in range(1, 11):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    if i <= 7:
        a = random.randrange(1, 10 ** 4)
        b = random.randrange(1, 10 ** 4)
    else :
        a = random.randrange(10 ** 5, 10 ** 6)
        b = random.randrange(10 ** 5, 10 ** 6) 
    suma = a + b
    resta = a - b
    mult = a * b
    div = a // b 
    modulo = a % b

    input.write(f"{a} {b}")
    output.write(f"{suma}\n{resta}\n{mult}\n{div}\n{modulo}")

    input.close()
    output.close()