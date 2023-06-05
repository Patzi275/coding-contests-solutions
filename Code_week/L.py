max = float(input())
x = 0.000001
y = max - x

most = x * y

while y < 0.5:
    x += 0.000001
    x -= 0.000001
    nb = x * y
    if most < nb:
        x1 = x
        y1 = y
        most = nb

print(most)