import math

print("Задание №1")
a = int(input())
b = int(input())
c = int(input())

k = 1

while (k <= 15):
    d = c + k
    p = (a + b + d) / 2
    s = math.sqrt(p * ((p - a) * (p - b) * (p - d)))
    print(s)
    k = k + 1

print("Задание №2")
n = int(input())

S = 0
k = 1

while (n >= k):
    S = S + k
    k = k + 1

print(S)

print("Задание №3")
n = int(input())

p = 1
i = 1

while (i <= n):
    p = p * 2
    i = i + 1

print(p)

print("Задание №4")
n = int(input())

p = 0

i = 1
for i in range(5):
    p = p + 2
    p = math.sqrt(p)

print(p)

print("Задание №5")
m = int(input())
n = int(input())

s = 1
for i in range(n):
    s = s * (m + n)

print(s)

print("Задание №6")

h = 0.5;

x = -3
while (x < 3):
    while (math.fabs(x) < 1):
        y = x
    y = x ** 2 + 1
    x = x + h
    print(y)

print("Задание №7")

x = int(input())
y = int(input())

r = x
q = 0

while (r >= y):
    r = r - y
    q = q + 1

print(q, " ", r)

print("Задание №8")

k = int(input())
n = 0

for i in range(1, int(math.sqrt(k))):
    x = k % i
    if (x == 0):
        n = n + 1
if (n == 0):
    print("1")
else:
    print("0")
