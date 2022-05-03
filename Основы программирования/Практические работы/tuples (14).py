import random

# Задание №1

print("Задание №1")

size = int(input("Введите кол-во студентов: "))

array = []

averageCount = 0

for i in range(size):
    array.append(random.randint(1, 25))
    
studentsCount = tuple(array)

for i in range(size):
    averageCount += studentsCount[i]
averageCount /= size

print("Кортеж с кол-вом студентов: ", studentsCount)
print("Среднее кол-во студентов: ", averageCount)


# Задание №2

print("\nЗадание №2")

size = int(input("Введите кол-во спортсменов: "))

array = []

averageGrade = 0
countMembers = 0

for i in range(size):
    array.append(random.randint(0, 10))

grades = tuple(array)

for i in range(size):
    averageGrade += grades[i]
averageGrade /= size

for i in range(size):
    if (grades[i] > averageGrade):
        countMembers += 1

print("Оценки спортсменов: ", grades)
print("Средняя оценка: ", averageGrade)
print("Кол-во спортсменов прошедших квалификацию: ", countMembers)

# Задание №3

print("\nЗадание №3")

size = int(input("Введите кол-во прыжков: "))

array = []

bestResult = 0

for i in range(size):
    array.append(random.randint(1, 200))

jumpResults = tuple(array)

badResult = jumpResults[1]

for i in range(size):
    if (bestResult < jumpResults[i]):
        bestResult = jumpResults[i]
    if (badResult > jumpResults[i]):
        badResult = jumpResults[i]

print("Результат соревнования прыжков в длину: ", jumpResults)
print("Самый лучший результат: ", bestResult)
print("Самый худший результат: ", badResult)

# Задание №4

print("\nЗадание №4")

def change(arr, element1, element2):
    try:
        index = arr.index(element1)
        arr = list(arr)
        for i in range(len(arr)):
            if (arr[i] == element1):
                arr[i] = element2
        arr = tuple(arr)
    except ValueError:
        print("Элемент не найден")
    return arr

size = int(input("Введите размер кортежа: "))

array = []

for i in range(size):
    array.append(random.randint(0, 50))
    
tuplee = tuple(array)

print("Исходный кортеж: ", tuplee, "\n")

elm1 = int(input("Введите элемент для замены в кортеже: "))
elm2 = int(input("Введите элемент на который заменить: "))

tuplee = change(tuplee, elm1, elm2)

print("Кортеж: ", tuplee)

# Задание №5

print("\nЗадание №5")

def delete(arr, element):
    arr = list(arr)
    arr.remove(element)
    arr = tuple(arr)
            
    return arr

size = int(input("Введите размер кортежа: "))

array = []

for i in range(size):
    array.append(random.randint(0, 50))
    
tuplee = tuple(array)

print("Исходный кортеж: ", tuplee, "\n")

maximum = 0
minimal = tuplee[1]

for i in range(size):
    if (maximum < tuplee[i]):
        maximum = tuplee[i]
    if (minimal > tuplee[i]):
        minimal = tuplee[i]

tuplee = delete(tuplee, maximum)
tuplee = delete(tuplee, minimal)

tuplee = list(tuplee)
for i in range(len(tuplee) - 1): 
    for j in range(len(tuplee) - 1): 
        if(tuplee[j] < tuplee[j+1]): 
            temp = tuplee[j] 
            tuplee[j] = tuplee[j+1] 
            tuplee[j+1] = temp 
tuplee = tuple(tuplee)

print("Минимальный элемент: ", minimal)
print("Максимальный элемент: ", maximum)

print("Кортеж после преобразования: ", tuplee)


# Задание №6

print("\nЗадание №6")

def add(arr, element):
    for i in range(0, len(arr)):
        if arr[i] < element:
            arr = list(arr);
            ind = arr.index(arr[i])
            arr.insert(ind, element)
            arr = tuple(arr)
            break
    return arr

size = int(input("Введите кол-во студентов группы: "))

array = []

for i in range(size):
    array.append(random.randint(130, 200))

tuplee = tuple(array)
    
tuplee = list(tuplee)
for i in range(len(tuplee) - 1): 
    for j in range(len(tuplee) - 1): 
        if(tuplee[j] < tuplee[j+1]): 
            temp = tuplee[j] 
            tuplee[j] = tuplee[j+1] 
            tuplee[j+1] = temp 
tuplee = tuple(tuplee)

print("Информация о росте студентов: ", tuplee, "\n")

elem = int(input("Введите рост новичка: "))

tuplee = add(tuplee, elem)

print("Информация с ростом новичка: ", tuplee, "\n")



