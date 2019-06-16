import math

n = int(input())
a = []
b = []
max = -math.inf
min = math.inf

for i in range(n):
    a.append([])
    for j in range(n):
        x = int(input())
        a[i].append(x)
    if n > max:
       max = x
    if n < min:
        min = n

for i in range(min, max + 1):
    b.append(None)

for i in range(n):
    b[a[i][n-1]].append(i)
print(b)

# for i in range(max, min - 1, -1):
#     if b[i] != [None]:

