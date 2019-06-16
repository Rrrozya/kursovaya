import math
def y(x):
    if x < 1:
        y = 1 - pow(math.fabs(math.cos(2 * x)), 0.5)
    if (1 <= x) and (x <= 2.5):
        y = x * x - x
    if x > 2.5:
        y = 1 + x * x
    return y


x = 0
while round(x, 2) <= 3:
    print("x = ", round(x, 2), ', y = ', round(y(x), 3))
    x += 0.2

