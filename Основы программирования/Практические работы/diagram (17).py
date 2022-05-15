from tkinter import *
import tkinter
import random
n = int(input("Введите количество столбцов: "))
length = [0]*n
colors = [0]*n
name = [0]*n
for i in range(n):
   name[i]= str(input("Введите название столбца: "))
   length[i]= int(input("Введите длину столбца: "))
   colors[i]= str(input("Введите цвет столбца: "))


# 2D gistogram
root = Tk()
root.title('Двумерная диаграмма')
root.geometry('800x800')
holst = Canvas (root, bg = 'white', width = 800, height = 800)
holst.pack()
width = 700 / n
long = max(length)
height = 700 / long
if (long <= 100):
   okr = 10
else:
   okr = 100
oc = long % okr
if (oc != 0):
   oc = okr - oc
   long += oc
holst.create_line(20 + width * 0.25 - 8, 780, 20 + width * 0.25 - 8, 760, fill = "black", width = 1)
for i in range(n):
    holst.create_text(width / 1.5 + i * width + 14, 750 - length[i] * height, fill = "black", font = "timesnewroman", text = length[i])
    holst.create_rectangle(width / 4 + i * width + 20, 770, width + i * width+ 20, 770 - length[i] * height, fill = colors[i], outline = "black", width = 1)
    holst.create_text(width / 1.5 + i * width+ 16 , 780, fill = "black", font = "timesnewroman 7", text = name[i])
    holst.create_line((width + i * width + 20 + width / 4 + (i + 1) * width + 20) / 2, 780,(width + i * width+ 20 + width / 4 +(i + 1)* width + 20) / 2, 760, fill="black", width=1)
    holst.create_line(width / 4 - 25, 770,(width + (n - 1) * width+ 20 + width / 4 + n* width + 20) / 2, 770, fill="black", width=1)
if (max(length) <= 10):
    rr = 1
elif (max(length)<= 100):
    rr = 10
elif (max(length)<= 1000):
    rr = 50
else:
    rr = 100
i = 0
summ = 0
k = (800 / (max(length) / rr)) * 0.8612
holst.create_text(20, 760, fill = "black", font = "timesnewroman 7", text = summ)
while summ < max(length):
    holst.create_line(20 + width * 0.25 - 4 - 8 , 760 - k, 20 + width * 0.25 + 4 - 8, 760 - k, fill = "black", width = 1)
    holst.create_line(20 + width * 0.25 - 8, 760, 20 + width * 0.25 - 8, 760 - k, fill = "black", width = 1)
    summ += rr
    holst.create_text(16, 760 - k, fill = "black", font = "timesnewroman 7", text = summ)
    i +=1
    k += 800 / (max(length) / rr)* 0.8612
    
# Isometric gistogram
holst.mainloop()
root = Tk()
root.title('Трёхмерная диаграмма')
root.geometry('800x800')
holst2 = Canvas (root, bg = 'white', width = 800, height = 800)
holst2.pack()
index = 0
summ = 0
k = (800 / (max(length) / rr)) * 0.865
holst2.create_polygon(20 + width * 0.25, 770, 60 + width * 0.25, 730, 60 + width * 0.25, 730 - k * ((long / rr) + 0.5), 20 + width * 0.25, 770 - k * ((long / rr) + 0.5), fill = "grey", outline = "black", width = '1')
holst2.create_polygon(20 + width * 0.25, 770, 20 + width * 1.25 + (n - 1) * width, 770, 60 + width * 1.25 + (n - 1) * width, 730, 60 + width * 0.25, 730, fill = "grey", outline = "black", width = '1')

   
for index in range(n):
    holst2.create_text(40 + width * 0.75 + index * width, 720 - length[index] * height, fill = "black", font = "timesnewroman", text = length[index])
    holst2.create_rectangle(20 + width / 2 + index * width, 760, 20 + width + index * width, 760 - length[index] * height, fill = colors[index], outline = "black", width = '1')

    try:
        holst2.create_polygon(20 + width + index * width, 760 - length[index] * height, 40 + width + index * width , 740 - length[index] * height, 40 + width + index * width, 740, 20 + width + index * width, 760, fill = 'dark' + colors[index], outline = 'black', width = '1')
        holst2.create_polygon(20 + width + index * width, 760 - length[index] * height, 40 + width + index * width , 740 - length[index] * height, 40 + width / 2 + index * width, 740 - length[index] * height, 20 + width / 2 + index * width, 760 - length[index] * height, fill = 'dark' + colors[index], outline = 'black', width = '1')
    except:
        holst2.create_polygon(20 + width + index * width, 760 - length[index] * height, 40 + width + index * width , 740 - length[index] * height, 40 + width + index * width, 740, 20 + width + index * width, 760, fill = 'black', outline = 'black', width = '1')
        holst2.create_polygon(20 + width + index * width, 760 - length[index] * height, 40 + width + index * width , 740 - length[index] * height, 40 + width / 2 + index * width, 740 - length[index] * height, 20 + width / 2 + index * width, 760 - length[index] * height, fill = 'black', outline = 'black', width = '1')
    holst2.create_text(20 + width * 0.75 + index * width, 780, fill = "black", font = "timesnewroman 7", text = name[index])
summ = 0
i = 0
k = 0
while summ <= long:
    holst2.create_text(16, 770 - k, fill = "black", font = "timesnewroman 7", text = summ)
    holst2.create_line(20 + width * 0.25 - 4 , 770 - k, 20 + width * 0.25 + 4 , 770 - k, fill = "black", width = 1)
    holst2.create_line(20 + width * 0.25 , 770, 20 + width * 0.25 , 770 - k, fill = "black", width = 1)
    
    summ += rr
    i +=1
    k += 800 / (max(length) / rr) * 0.888
holst2.mainloop()
