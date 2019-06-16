mas = []
med = 0
for i in range(15):
    n = int(input())
    mas.append(n)
    med += n
med /= 15
for i in range(15):
    mas[i] -= med
    print(mas[i])

