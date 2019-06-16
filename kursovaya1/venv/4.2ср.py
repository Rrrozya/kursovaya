a = []
n = int(input())
m = int(input())

for i in range(n):
    a.append([])
    for j in range(m):
        a[i].append(int(input()))
b = []
for i in range(n):
    for j in range(m):
        b.append(a[i][j])

print(b)
