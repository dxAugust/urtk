import random

# Задание 1
print("Задание 1")

string = str(input("Введите строку: "))

countLower = 0
countHigher = 0
Sum = 0

for i in range(len(string)):
    if(string[i].islower()):
        countLower += 1
    if(string[i].isupper()):
        countHigher += 1
Sum = countLower + countHigher

print("Нижнего регистра: ", (countLower/Sum)*100, "%", " Высшего регистра: ", (countHigher/Sum)* 100, "%")

# Задание 2
print("Задание 2")

string = str(input("Введите строку: "))

multiply = 1
summary = 0

for i in range(len(string)):
    if(string[i].isdigit()):
        summary += int(string[i])

        if (int(string[i]) != 0):
            multiply *= int(string[i])

print("Сумма чисел числа: ", summary)
print("Произведение чисел числа", multiply)


# Задание 3
print("Задание 3")

string = str(input("Введите строку: "))
string = string.strip()
string = "*".join(string.split())

print(string)

#Задание 4
print("Задание 4")

def genPassword(string):
    f1 = 0
    f2 = 0
    f3 = 0
    output = ""
    for i in range(int(string)):
        out = random.randint(1, 4)
        if (out == 1):
            f1 += 1
            output += chr(random.randint(65, 90))
        if (out == 2):
            f2 += 1
            output += chr(random.randint(48,  57))
        if (out == 3):
            f3 += 1
            output += chr(random.randint(33,  47))
        if (out == 4):
            output += chr(random.randint(97,  122))
    if(f1 == 0  or f2 == 0 or f3 == 0):
        return genPassword(string)
    else:
        return output

string = str(input("Введите размер пароля: "))
print("Password:", genPassword(string))
    

    



