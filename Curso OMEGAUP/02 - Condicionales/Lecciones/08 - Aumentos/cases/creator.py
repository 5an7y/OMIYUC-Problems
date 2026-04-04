import random

for i in range(1, 13):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    s = random.randrange(1, 10 ** 4 + 1) * 10

    if i % 4 == 0:
        T = random.randrange(1, 5)
        C = random.randrange(1, 70)
        S2 = s
    elif i % 4 == 1:
        T = random.randrange(1, 5)
        C = random.randrange(70, 101)
        S2 = int(s * 1.1)
    elif i % 4 == 2:
        T = random.randrange(5, 11)
        C = random.randrange(1, 60)
        S2 = int(s * 1.2)
    else:
        T = random.randrange(5, 11)
        C = random.randrange(60, 101)
        S2 = int(s * 1.3)
    
    input.write(f"{s} {T} {C}")
    output.write(f"{S2}")

    input.close()
    output.close()