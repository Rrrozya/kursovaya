s = 20
day = int(input())
time = int(input())
S = time * s
if day < 6:
    print(S)
else:
    print(0.8 * S)
