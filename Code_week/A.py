entier = int(input())
nbA = 1
nbB = 0
lastNbB = 0

for i in range(entier):
    lastNbB = nbB
    nbB = nbA + lastNbB
    nbA = lastNbB
    
print(nbA, nbB)