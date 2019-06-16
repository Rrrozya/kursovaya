import math

mas = []
for i in range(5):
    mas.append([])
    for j in range(6):
        mas[i].append(int(input()))

med = 0
for j in range(6):
    for i in range(5):
        med += mas[i][j]
    med /= 2
    print("Среднее арифметическое столбца №", j+1, " = ", med)
    med = 0

m = -math.inf
for i in range(5):
    for j in range(6):
        if mas[i][j] > m:
            m = mas[i][j]
    print("Максимальный элемент строки №", i+1, "=", m)
    m = -math.inf

m = math.inf
for i in range(5):
    for j in range(6):
        if mas[i][j] < m:
            m = mas[i][j]
    print("Минимальный элемент строки №", i+1, "=", m)
    m = math.inf
