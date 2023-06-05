import math

def m(x, y, r):
    c = x + y*1f
    z = 0
    for i in range(r):
        z = z**2 + c
        if abs(z) > 2:
            return "OUT"
    return "IN"

case = 1
while True:
    try:
        x, y, r = map(float, input().split())
        print("Case {}: {}".format(case, m(x, y, r)))
        case += 1
    except:
        break
