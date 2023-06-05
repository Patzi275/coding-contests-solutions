nb = int(input())

for i in range(nb):
    chaine = input()
    taille = len(chaine)
    if taille % 2 != 0:
        print("NO")
    else:
        if chaine[:int(taille/2)] == chaine[int(taille/2):]:
            print("YES")
        else:
            print("NO")