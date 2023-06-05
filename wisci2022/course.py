n = int(input())
c = {}
for i in range(n):
    f, l, co = input().split()
    
    if co not in c.keys():
        c[co] = []
        if (f+l) not in c[co]:
            c[co].append(f+l)
    if (f+l) not in c[co]:
        c[co].append(f+l)
    
cd = {}
for i, j in c.items():
    cd[i] = len(j)

cd = dict(sorted(cd.items()))
for i, j in cd.items():
    print(i, j)