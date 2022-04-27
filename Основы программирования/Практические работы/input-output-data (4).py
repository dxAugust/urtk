# Задание 1
print("Задание 1")
name = input("Введите имя: ")
print("Привет, ", name,"!", sep ='')

# Задание 2
print("Задание 2")
num = int(input("Input number: "))
print("Следущее за числом", num, "число -", num + 1)
print("Для числа", num, "предыдушее число -", num - 1)

# Задание 3
print("Задание 3")
num1 = int(input("Number 1: "))
num2 = int(input("Number 2: "))
i = num1 + num2
j = num1 - num2
o = num1 * num2
m = num1 / num2
v = (num1 + num2) / 2
print(num1,'+', num2,'=', i," ", num1,'-', num2,'=', j, " ", num1,'*', num2,'=', o," ", num1,'/', num2,'=', m, sep='')
print('(', num1,'+', num2,')','/','2','=', v, sep='')

# Задание 4
print("Задание 4")
schoolboys = int(input("Введите кол-во школьников: "))
apple = int(input("Введите кол-во яблок: "))
print("Каждому школьнику достанется:", apple // schoolboys)
print("В корзине останется:", apple - (schoolboys * (apple // schoolboys)))

# Задание 5
print("Задание 5")
num = int(input("Введите трехзначное число: "))
print("Сумма цифр числа:", (num // 10) + (num % 10))

# Задание 6
print("Задание 6")
num = int(input("Введите трехзначное число: "))
print(num // 100, (num - ((num // 100)*100)) // 10, num  % 10, sep = ", ")

# Задание 7
print("Задание 7")
num = int(input("Введите четырёхзначное число: "))
a = num % 10
b = num // 10 % 10
c = num // 100 % 10
d = num // 1000
print(a + b + c + d)

num = int(input("Введите пятизначное число: "))
a = num % 10
b = num // 10 % 10
c = num // 100 % 10
d = num // 1000 % 10
y = num // 10000
print(a * b * c * d * y)
