from math import pi

nb = int(input())

for i in range(nb):
    enter = [int(a) for a in input().split(' ')]
    R = enter[0]
    A = enter[1]
    B = enter[2]
    left = True
    area = 0

    while R >= 1:
        area += pi * R**2

        if left:
            R *= A
        else:
            R /= B
        left = not left
    
    print("Case #{0}: {1}".format(i + 1, round(area, 6)))