def getGain(comb, evo, pfInitial):
    haveAction = False
    porteFeuille = pfInitial

    for day in range(6):
        action = comb[day]
        if action == 'laisse':
            continue
        elif action == 'achete':
            if porteFeuille >= evo[day]:
                porteFeuille -= evo[day]
                haveAction = True
        elif action == 'vend':
            if haveAction:
                porteFeuille += evo[day]
                haveAction = False

    return porteFeuille


evolution = [100, 200, 100, 150, 125, 300]
bestCombinaison = []
actionPossible = ['laisse', 'vend', 'achete']
combinaison = [actionPossible[0] for i in range(6)]

gainMax = 0
gain = 100

for i in actionPossible:
    for j in actionPossible:
        for k in actionPossible:
         .reverse()   for l in actionPossible:
                for m in actionPossible:
                    for n in actionPossible:
                        combinaison = [i, j, k, l, m, n]
                        gain = getGain(combinaison, evolution, 100)
                        if gainMax < gain:
                            gainMax = gain
                            bestCombinaison = combinaison

print("Gain max :", gainMax)
print(bestCombinaison)
