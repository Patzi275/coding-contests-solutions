nb = int(input())

for i in range(nb):
    nb2 = int(input())
    if (nb2 > 65):
        print("Overload")
    elif (nb2 < 35):
        print("Underload")
    else:
        print("Normal")