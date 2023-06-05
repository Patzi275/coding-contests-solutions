nb = int(input())

for i in range(nb):
    a, b, c = [int(i) for i in input().split()]
    if b < a:
        b, a = a, b
    print("Possible" if (b / a == c) or (b - a == c) or (b + a == c) or (b * a == c) else "Impossible")