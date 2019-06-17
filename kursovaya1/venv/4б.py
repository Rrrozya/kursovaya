mas = []
med = 0
for i in range(15):
    n = int(input())
    mas.append(n)
    med += n
med /= 15
mas1 = []
for i in range(15):
    mas1[i] = mas[i] - med
print(mas1)

