a = float(input())
R = float(input())
if a * a > pi * R * R:
    print("Площадь квадрата больше площади круга.")
elif a * a < pi * R * R:
    print("Площадь круга больше площади квадрата.")
elif a * a == pi * R * R:
    print("Площади квадрата и круга равны")
