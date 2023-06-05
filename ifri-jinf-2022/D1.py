chaine = input()
taille = len(chaine)

newChaine = ""

for i in chaine:
    if i == '<':
        newChaine = newChaine[:-1]
    else:
        newChaine += i;

print(newChaine)