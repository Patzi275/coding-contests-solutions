while True:
    try:
        a = input()
        if a:
            n = int(a)

            if n < 1:
                print(0)
            elif n == 1:
                print(1)
            else: 
                print(2 * (n - 1))
    except :
        break