from math import pi, sin, sqrt

print("Задание 1-1")
a = float(input("Введите первое число: "))
b = float(input("Введите второе число: "))
if (a > b):
    print(a, " > ", b)
elif (b > a):
    print(a, " < ", b)
else:
    print(a, " = ", b)


print("Задание 1-2")
a = int(input("Введите число а: "))
n = int(input("Введите число n: "))
if((n % a) == 0):
    print("Число ", a, " является делителем числа ", n)
else:
    print("Число ", a, " не является делителем числа ", n)


print("Задание 1-3")
x = float(input("Введите значение X: "))
if (x < 4):
    print("Часть I")
elif (x > 4):
    print("Часть II")
else:
    print("На границе между частями")


print("Задание 1-4")
x = float(input("Введите значение x: "))
if (x > 0):
    y = sin(x) ** 2
else:
    y = 1 - (sin(x ** 2))
print("y = ", y)


print("Задание 1-5")
radius = float(input("Введите радиус круга: "))
squareSide = float(input("Введите сторону квадрата: "))
S_square = squareSide * squareSide
S_circle = pi * (radius * radius)
if (S_square > S_circle):
    print("Площадь квадрата больше")
elif(S_circle > S_square):
    print("Площадь круга больше")
else:
    print("Площадь круга и квадрата равны")


print("Задание 1-6")
n = int(input("Введите целое число n: "))
a = n % 2
b = n + 2 - a * 1
print("Следующее четное число: ", b)


print("Задание 1-7")
a = int(input('Введите коффициент a: '))
b = int(input('Введите коффициент b: '))
c = int(input('Введите коффициент c: '))
d = (b ** 2) - 4 * a * c
if (d > 0):
    x1 = ((-b) - sqrt(d)) / (2 * a)
    x2 = ((-b) + sqrt(d)) / (2 * a)
    print("x1 = ", x1)
    print("x2 = ", x2)
elif (d < 0):
    print("Нет решений")
else:
    x = ((-b) - sqrt(d)) / (2 * a)
    print("x = ", x)


print("Задание 2-1")
a = int(input("Введите первое число: "))
b = int(input("Введите второе число: "))
operation = input("Введите мат. операцию ('+', '-', '*', '/'): ")
if (operation == "+"):
    r = a + b
elif (operation == "-"):
    r = a - b
elif (operation == "*"):
    r = a * b
elif (operation == "/"):
    if (b != 0):
        r = a / b
    else:
        r = "Деление на ноль запрещено"
else:
    r = "Вы не ввели мат. операцию"
print(r)

print("Задание 2-2")
d = int(input("Введите день: "))
m = int(input("Введите месяц: "))
g = int(input("Введите год: "))

if (m == 2):
    if (d < 28):
        d = d + 1
    else:
        m = 3
        d = 1
elif ((m == 1) or (m == 3) or (m == 5) or (m == 7) or (m == 8) or (m == 10) or (m == 12)):
    if (d < 31):
        d = d + 1
    else:
        if (m == 12):
            d = 1
            m = 1
            g = g + 1
        else:
            d = 1
            m = m + 1
elif ((m == 4) or (m == 6) or (m == 9) or (m == 11)):
    if (d < 30):
        d = d + 1
    else:
        d = 1
        m = m + 1

print(d, m, g)

