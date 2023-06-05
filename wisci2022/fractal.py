import math

aire = lambda x: x*x*math.pi

n = int(input())
for i in range(n):
    r, it = map(int, input().split())
    s = aire(r)
    it -= 1;

    if it >= 1:
        r /= 2
        s += 4 * aire(r)

    for i in range(it-1):
        r /= 2
        s += 4 * 3 * (i+1) * aire(r)

    print(s)