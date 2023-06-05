nb = int(input())

for i in range(nb):
    nombre = int(input())
    nbcarre = 0
    for j in range(1, nombre):
        if j**2 <= nombre:
            nbcarre += 1
    print(nbcarre)