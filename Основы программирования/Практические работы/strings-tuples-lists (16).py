#pr 16
print("##1##")
arr = []

size = int(input("Введите размер кортежа: "))

for i in range(size):
    n = int(input())
    arr.append(n)

arr = tuple(arr)
arr = list(arr)
list.sort(arr)
print(arr)

print("##2##")

string = str(input("Введите строку: "))
arr = string.split()

list.sort(arr)
print(arr)
for i in range(len(arr)):
    print(arr[i])


print("##3##")
string = str(input("Введите строку: "))
print(string)
print(string.replace("!", " "))


print("##4##")

number = int(input("Введите число: "))
for i in range(number):
    print(str(number) + " times " + str(i + 1) + " is equal to " + str(number * (i + 1)))


print('##5##')
text = input("Введите имена через пробел: ")
text = text.split()
print(text)

for i in text:
    print("Hello, ", i, "!", sep = '')


print('##6##')
text = input("Введите имена через пробел: ")
text = text.split()
list.sort(text)
print(text)
 
for i in text:
    print("Hello, ", i, "!", sep = '')
    
print('##7##')
num = int(input("Введите кол во людей: "))
#text = []
arr = []
for i in range (num):
    arr.append([])
    arr[i].append(str(input("Введите имя: ")))
    arr[i].append(int(input("Введите оценку: ")))
    arr[i] = (tuple(arr[i]))

print(arr)
for i in range(len(arr)):
    print("Hello, " + str(arr[i][0]) + "! Your grade is " + str(arr[i][1]) + ".")

print('##8##')
text = input("Введите имена через запятую: ")
text = text.split(",")
print(text)
for i in text:
    if (("Mr. " in i) or ("Mrs. " in i)):
        print("Good morning, ", i, "!", sep='')
    else:
        print("Hello, ", i, "!", sep='')









