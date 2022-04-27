import random

k = 0

S = 0
So = 12**2
N = 10000

x = 0.0
y = 0.0

for i in range(N):
    x = random.uniform(-6, 6)
    y = random.uniform(-6, 6)
    
    if ((y >= -x - 6.0) and ((x < 0.0) and (y < 0.0))) or ((((x**2.0) + (y**2.0)) >= 9.0)) and ((x >= 0.0 and x <= 6.0) and (y >= 0.0 and y <= 6.0)):
        k = k + 1

S = k / N * So

print("Кол-во точек попавших в фигуру: ", k)
print("Общее количество точек пушенных на плоскость", N)
print("Общая плоскости на которой находится фигура: ", So)
print("Общая площадь фигуры: ", S)
