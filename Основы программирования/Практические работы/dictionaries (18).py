#pr 18
print("Задание №1")

def get_key(d, value):
    for k, v in d.items():
        if v == value:
            return k

dictionary = {"pen":"ручка", "pineapple":"ананас", "apple":"яблоко", "beer":"пиво", "да":"no"}
while(True):
    point = int(input("1. Получить перевод слова\n2. Выйти\n\nВведите пункт: "))

    if (point == 2):
        print("Вы успешно вышли из программы :)")
        break
    
    word = str(input("Введите слово: "))
    

    if word in dictionary:
        print("Перевод слова: '", dictionary[word], "'", sep = "")
    elif (get_key(dictionary, word) != None):
        print("Перевод слова: '", get_key(dictionary, word), "'", sep = "")
    else:
        translateWord = str(input("Введите перевод для слова: "))
        dictionary[word] = translateWord


print("Задание №2")

Max = -1
students = {"Левин":[1, 2, 3, 4, 5, 6, 7, 8, 9, 10], "Хромцов":[2, 5, 7, 8, 10], "Смирнов":[1, 2], "Акулич":[10], "Прокопенко":[]}

while(True):
    print("\n1. Выводить весь словарь, Информация должна располагаться в выровненных колонках.\n\
2. По фамилии студента выводить номера сданных им работ\n\
3. Добавлять студенту номер работы, при этом номера работ должны быть упорядочены по возрастанию\n\
4. Определять не сданные студентом номера работ. Для этого нужно запросить номер последней работы\n\
5. Выйти из программы")

    point = int(input("\n\nВведите выбранный пункт меню: "))

    if(point == 1):
        for i in students:
            if(len(i) > Max):
                Max = len(i)
        for i in students:
            space = Max - len(i)
            print("\n", i, " " * space, ": ", sep = "", end = "")
            for j in students[i]:
                print(j, sep = "", end = ", ")
    elif (point == 2):
        surname = str(input("Введите фамилию студента: "))

        if (students.get(surname) != None):
            print("Список сданных лабароторных работ студентом ", surname, ":", sep="")
            for i in students.get(surname):
                print(i, sep="", end=", ")
        print()
        
    elif (point == 3):
        surname = str(input("Введите фамилию студента: "))
        
        workNO = int(input("Введите номер работы: "))
        temp = list(students.get(surname, []) + [workNO])
        temp.sort()
        students[surname] = temp
        
    elif (point == 4):
        countoflabs = int(input("Введите номер последней работы: "))
        surname = str(input("Введите фамилию студента: "))

        if (students.get(surname) == None):
            print("У ", surname, "нету сданнных работ!")
        else:
            temp = students.get(surname)
            for i in range(countoflabs):
                if (not(i + 1 in temp)):
                    print(i + 1, sep="", end=", ")
        
    elif (point == 5):
        break
    
print("Задание №3")

sonDad = {"Саша": "Паша", "Владимир":"Дима", "Август":"Шон", "Костя":"Константин"}

while (True):

    print("1. Найти отца\n2. Добавить пару\n3. Заменить пару\n4. Вырезать пару\n5. Вывести список родственников\n6. Выйти из программы")
    
    point = int(input("\n\nВведите выбранный пункт меню: "))
    
    if (point == 1):
        name = str(input("Введите имя сына: "))

        try:
            if (name in sonDad):
                print("Ваш батя - ", sonDad[name])
            
            if (sonDad[name] in list(sonDad.keys())):
                print("Ваш дед - ", sonDad[sonDad[name]])
        except KeyError:
            print("ВЫ СИРОТА!")
        
    elif (point == 2):
        name = str(input("Введите имя сына: "))
        dad = str(input("Введите отца: "))

        sonDad[name] = dad
    elif (point == 3):
        name = str(input("Введите имя сына для заменямой пары: "))
        nameChange = str(input("Введите имя приёмного сына: "))

        dad = str(input("Введите приёмного отца: "))

        sonDad.pop(name)
        sonDad[nameChange] = dad
    elif (point == 4):
        name = str(input("Введите имя сына, чтобы вырезать: "))
        sonDad.pop(name)
    elif (point == 5):
        print(sonDad)
    elif (point == 6):
        break
