import math

_i = int(input())
for i in range(_i):
    n, m = map(int, input().split())
    prizes = []
    inhand = []

    for j in range(n):
        prizes.append(list(map(int, input().split()))[1:])
    inhand = list(map(int, input().split()))
    

    total_prize = 0
    for prize in prizes:
        smin = math.inf
        for k in range(m):
            if k + 1 in prize:
                smin = min(smin, inhand[k])
        
        if smin > 0:
            total_prize += prize[-1] * smin
            for k in range(m):
                if (k + 1) in prize[:-1]:
                    inhand[k] -= smin
    
    print(total_prize)
