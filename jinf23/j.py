n, m, c = map(int, input().split())
tas = [c] * n

for i in range(m):
    l = input().split()
    if l[0] == 'S':
        u, v, k = map(int, l[1:])
        for i in range(u-1, v):
            tas[i] += k
    elif l[0] == 'Q':
        p = int(l[1])
        print(tas[p-1])
