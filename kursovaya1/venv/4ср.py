x = []
for i in range(15):
    n = int(input())
    x.append(n)
y = []
for i in range(15):
    y.append(cos(x[i] * x[i]) + 2.97 * pow(log(i * i, 10), 2))
mas = []
for i in range(30):
    mas.append(x[i])
    mas.append(y[i])
mas1 = sorted(mas, reverse=True)
print(mas1)
