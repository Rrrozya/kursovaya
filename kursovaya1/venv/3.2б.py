def f(n):
    sum = 0
    for i in range(1,n):
        if n % i == 0:
            sum += i

    if sum == n:
        cnt = 1
    else:
        cnt = 0
    return cnt


x = int(input())
b = 0
for i in range(2, x + 1):
    if f(i) == 1:
        print(i)
        b += 1
if b == 0:
    print("На данном промежутке совершенных чисел нет.")
