import random

print("Задание №1")
p = 0
for i in range(1, 13):
    a = random.randint(1,100)
    print(a, end=' ')
    p += a
print("\nПериметр равен: ", p)


print("Задание №2")
s = 0
for i in range(1, 11):
    a = random.randint(0, 99999)
    print(a, end=' ')
    if a % 10 == 0:
        s += a
print("\nСумма равна: ", s)


print("Задание №3")
days = int(input("Введите кол-во дней в месяце: "))
s = 0
for i in range(1, days + 1):
    rand = random.randint(0, 3000)
    print(rand, end=' ')
    if (i % 2) == 0:
        s += rand
print("\nСумма осадков равна: ", s)


print("Задание №4")
s = 0
for i in range(1, 13):
    a = random.randint(140, 220)
    print(a, end=' ')
    if a < 165:
        s += 1
print("\nЮнош ростом меньше 165: ", s)


print("Задание №5")
s = 0
u = int(input("Введите кол-во учеников: "))
for i in range(1,u + 1):
    a = random.randint(2, 5)
    print(a, end=' ')
    if a == 5:
        s += 1
print("\nКол-во оценок 'пять': ", s)
