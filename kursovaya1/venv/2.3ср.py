import math


def f(a, b, z, x):
    if x < pow(a, 3):
        y = a * pow(sin(x), 2) + b * cos(z * x + a)
    elif (pow(a, 3) <= x) and (x <= b):
        y = pow(a + b * x, 2) - sin(a + z * x)
    elif x > b:
        y = pow(x - sin(b * x + z), 0.5)
    return y


a = 1.2
b = 7.2
x = float(input())
z = exp(x)
r1 = f(a, b, z, x)
print("При a = ", a, ", b = ", b, ", z = ", z, " значение y = ", r1)

a = -1.5
b = 3.2
z = pow(exp(x), 2)
r1 = f(a, b, z, x)
print("При a = ", a, ", b = ", b, ", z = ", z, " значение y = ", r1)

a = 1.7
b = 5.5
z = exp*exp*exp
r1 = f(a, b, z, x)
print("При a = ", a, ", b = ", b, ", z = ", z, " значение y = ", r1)
