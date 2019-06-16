n = int(input())
x = int(input())
sum = x
p = 1
z = 1
for i in range(1, n + 1):
    z = z * (z + 1) * (z + 2) * (z + 3) * (z + 4)
    p += 4
    sum += pow(x, p)/z
print(sum)
