import random

for i in range(1, 11):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    a = int(random.randrange(1, 1001))
    input.write(f"{a}")

    if a < 500:
        a *= 2
    else:
        a //= 2

    output.write(f"{a}")

    input.close()
    output.close()