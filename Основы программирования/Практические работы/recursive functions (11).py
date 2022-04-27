# Задание 1

def calculateRoot(numb, summary = 0, root = 0):
    if (numb != 0):
        summary += numb % 10
        return calculateRoot(numb // 10, summary, 0)
    elif (summary != 0):
        root += summary % 10
        return calculateRoot(0, summary // 10, root)
    else:
        return int(root)

while True:

    try:
        number = int(input('Введите число: '))

        if (number < 0):
            raise Warning

        print("Цифровой корень равен: ", calculateRoot(number))
        
    except ValueError:
        print('Неверный тип данных')
    except Warning:
        print('Неверный ввод')
    else:
        break

# Задание 2

def getCountOfSquares(a, b, n = 0):
    
    if (a == b):
        return n + 1
    
    if (a < b):
        return getCountOfSquares(a, b - a, n + 1)
    else:
        return getCountOfSquares(a - b, b, n + 1)

while True:

    try:
        a = int(input('Введите сторону A прямоугольника: '))
        b = int(input('Введите сторону B прямоугольника: '))

        if (a < 0 or b < 0):
            raise Warning

        print("Кол-во прямоугольников: ", getCountOfSquares(a, b))
        
    except ValueError:
        print('Неверный тип данных')
    except Warning:
        print('Неверный ввод')
    else:
        break
