import math
m = 1.8
k = float(input())
x = pow(exp, m*k)
print("%.3f" % x)
c = pow(cos(m), 2)+pow(k, 2)
print("%.3f" % c)
y = pow((pow(x, 2)+pow(c, 2)), 1/3)
print("%.3f" % y)
