def isitPrime(k):
    if k==2 or k==3: return True
    if k%2==0 or k<2: return False
    for i in range(3, int(k**0.5)+1, 2):
        if k%i==0:
            return False
    return True

number = int(input())
divider = 1
divided = 0
tMax = 1

while (True):
    power = divider ** 9
    if power > number:
        break
    if number % power == 0 and isitPrime(number / power):
        tMax = divider
    divider += 1
print(tMax)