k = int(input())
w = 0
j = 1
for i in range(1, k + 1):
    j *= i
    w += pow(-1, i) * pow(i-3, 2) / j
print(w)
