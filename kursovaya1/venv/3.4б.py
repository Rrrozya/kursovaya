def y(x):
    a = pow(x, 3) + 3 * x * x - 3
    return a


x = 2
while round(x, 2) <= 4:
    print("x = ", round(x, 2), ', y = ', round(y(x), 3))
    x += 0.2
