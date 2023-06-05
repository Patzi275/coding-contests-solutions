nb = int(input())
for i in range(nb):
    r = int(input())
    e = int(input())
    c = int(input())

    advGain = e - c
    if r < advGain:
        print("advertise")
    elif r > advGain:
        print("do not advertise")
    else:
        print("does not matter")