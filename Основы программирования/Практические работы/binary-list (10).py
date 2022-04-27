from random import randint

n = 15
array = []

for i in range(n):
        array.append(randint(1, 10))
        
print("Неотсортированный список:  ", array)
array.sort()
print("Отсортированный список: ", array)

print("Введите искомое число:")
value = int(input())
 
mid = len(array) // 2
print('mid', mid)

low = 0
high = len(array) - 1
 
while array[mid] != value and low <= high:
    if value > array[mid]:
        low = mid + 1
    else:
        high = mid - 1
    mid = (low + high) // 2

if low > high:
    print("Данный элемент не найден")
else:
    print("Индекс найденого элемента: ", mid)

    count = 1
    mid1 = mid + 1
    mid2 = mid - 1

    while (mid1 < len(array)):
        if (array[mid1] == value):
            count += 1
        mid1 += 1

    while (mid2 >= 0):
        if (array[mid2] == value):
            count += 1
        mid2 -= 1

    print("Количество элементов:", count)
