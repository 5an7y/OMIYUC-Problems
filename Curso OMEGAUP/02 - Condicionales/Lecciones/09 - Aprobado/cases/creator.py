import random

for i in range(1, 16):
    input  = open(f"{i}.in", "w")
    output = open(f"{i}.out", "w")

    if i % 5 == 0:
        cal1 = random.randrange(70, 100 + 1)
        cal2 = random.randrange(70, 100 + 1)
    elif i % 5 == 1:
        cal1 = random.randrange(50, 70)
        cal2 = random.randrange(150 - cal1, 101)
    elif i % 5 == 2:
        cal1 = random.randrange(67, 70)
        cal2 = random.randrange(67, 70)
    elif i % 5 == 3:
        cal1 = random.randrange(50, 70)
        cal2 = random.randrange(144 - cal1, 150 - cal1)
    else:
        cal1 = random.randrange(0, 50)
        cal2 = random.randrange(0, 50)
    
    input.write(f"{cal1} {cal2}")
    cal1 += 3
    cal2 += 3

    if (cal1 >= 70 and cal2 >= 70) or cal1 + cal2 >= 150:
        output.write("Aprobado")
    else :
        output.write("No aprobado")

    input.close()
    output.close()