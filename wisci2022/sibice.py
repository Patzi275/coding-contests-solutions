import math

a, b, c = map(int, input().split())
d = math.sqrt(b*b + c*c)

for i in range(a):
    n = int(input())
    if n <= b or n <= c or n <= d:
        print("DA")
    else:
        print("NE")