t = int(input())
for i in range(t):
    x = input()
    l = len(x) // 2
    a = x[:l]
    b = x[-l:]

    s1 = list(a)
    s1.sort()
    s2 = list(b)
    s2.sort()

    if s1 == s2:
        print('YES')
    else:
        print('NO')
