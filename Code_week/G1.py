number = int(input())
divider = 1
tMax = 1
power = 1

while (power <= number):
    if number % power == 0:
        tMax = divider
    divider += 1
    power = divider ** 9

print(tMax)