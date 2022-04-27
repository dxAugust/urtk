from tkinter import *

#ЗАДАНИЕ 1

root = Tk()
root.title('Task-1')

root.geometry('400x400')
firstCanvas = Canvas(root, bg='white', width=400, height=400)
firstCanvas.pack()

firstCanvas.create_rectangle(150, 150, 250, 250, fill="green")
firstCanvas.create_rectangle(0, 0, 400, 400, fill="blue")
firstCanvas.create_rectangle(0, 0, 200, 200, fill="red")
firstCanvas.create_rectangle(0, 0, 200, 200, fill="purple")

firstCanvas.create_rectangle(200, 200, 400, 400, fill="chocolate")

firstCanvas.mainloop()

#Задание 2

root2 = Tk()
root2.title('Task-2')

root2.geometry('900x200')
secondCanvas = Canvas(root2, bg='gray', width=900, height=200)
secondCanvas.pack()


# Russian flag
secondCanvas.create_rectangle(0, 0, 300, 200/3, fill="white", outline="")
secondCanvas.create_rectangle(0, 200/3*2 , 300, 200/3, fill="blue", outline="")
secondCanvas.create_rectangle(0,3*200/3, 300, 2*200/3, fill="red", outline="")

#French flag
secondCanvas.create_rectangle(300, 0, 400, 200, fill="red", outline="")
secondCanvas.create_rectangle(400, 0, 500, 200, fill="white", outline="")
secondCanvas.create_rectangle(500, 0, 600, 200, fill="darkblue", outline="")

# German flag
secondCanvas.create_rectangle(600, 0, 900, 200/3, fill="black", outline="")
secondCanvas.create_rectangle(600, 200/3*2 , 900, 200/3, fill="red", outline="")
secondCanvas.create_rectangle(600, 3*200/3, 900, 2*200/3, fill="#Ffc201", outline="")

secondCanvas.mainloop()



#Задание 3

root3 = Tk()
root3.title('Task-3')

root3.geometry('800x800')
thirdCanvas = Canvas(root3, bg='white', width=800, height=800)
thirdCanvas.pack()

thirdCanvas.create_line(0, 0, 800, 0, width=50, fill="blue")
thirdCanvas.create_line(0, 0, 0, 800, width=50, fill="blue")
thirdCanvas.create_line(0, 0, 800, 800, width=50, fill="blue")
thirdCanvas.create_line(0, 0, 800, 800, width=50, fill="red")
thirdCanvas.create_line(800, 0, 0, 800, width=50, fill="yellow")

thirdCanvas.mainloop()

#Задание 4

root4 = Tk()
root4.title('Task-4')

root4.geometry('1600x800')
fourthCanvas = Canvas(root4, bg='white', width=1600, height=800)
fourthCanvas.pack()

fourthCanvas.create_oval(155, 450, 415, 630, fill = 'white', width=5) #head
fourthCanvas.create_oval(190, 290, 385, 460, fill = 'white', width=5) #body
fourthCanvas.create_oval(220, 180, 365, 300, fill = 'white', width=5) #body part 2

fourthCanvas.create_line(210, 323, 80, 415, fill="black", width=10) #hand 1
fourthCanvas.create_line(373, 335, 530, 360, fill="black", width=10) #hand 2

# Beer
fourthCanvas.create_oval(525, 277, 590, 320, fill="#DC9227", outline="")
fourthCanvas.create_oval(525, 400, 590, 441, fill="#CBBEC8", outline="")
fourthCanvas.create_rectangle(525, 300, 591, 430, fill="#D6B204", outline="")

fourthCanvas.create_line(525, 310, 592, 310, width=5, fill="#0F34B9")
fourthCanvas.create_line(525, 414, 591, 414, width=5, fill="#0F34B9")

fourthCanvas.create_text(560, 355, text="Жигулёвское\n4.6%", fill="#0F34B9", justify=CENTER, font="Verdana 6")


fourthCanvas.create_polygon((250, 60), (350, 65), (365, 215), (215, 200), fill="black") # hat

# Face
fourthCanvas.create_oval(252, 222, 272, 242, fill="black", outline="")
fourthCanvas.create_oval(309, 227, 329, 247, fill="black", outline="")
fourthCanvas.create_line(257, 258, 267, 282, width=10, fill="black")
fourthCanvas.create_line(265, 280, 308, 284, width=10, fill="black")
fourthCanvas.create_polygon((291, 244), (283, 264), (337, 274), fill="black")

# Мишень
fourthCanvas.create_oval(615, 268, 917, 557, fill="red", outline="")
fourthCanvas.create_oval(636, 290, 895, 538, fill="white", outline="")
fourthCanvas.create_oval(654, 310, 878, 520, fill="red", outline="")
fourthCanvas.create_oval(670, 325, 861, 505, fill="white", outline="")
fourthCanvas.create_oval(683, 340, 849, 493, fill="red", outline="")
fourthCanvas.create_oval(698, 356, 832, 478, fill="white", outline="")
fourthCanvas.create_oval(726, 380, 804, 454, fill="black", outline="")

# Олимпийские кольца
fourthCanvas.create_oval(1030, 287, 1133, 390, fill="", outline="blue", width=5)
fourthCanvas.create_oval(1152, 288, 1255, 391, fill="", outline="black", width=5)
fourthCanvas.create_oval(1093, 347, 1191, 446, fill="", outline="yellow", width=5)
fourthCanvas.create_oval(1273, 289, 1380, 392, fill="", outline="red", width=5)
fourthCanvas.create_oval(1215, 348, 1316, 447, fill="", outline="green", width=5)

fourthCanvas.mainloop()

#Задание 5

x = int(input("Enter X: "))
y = int(input("Enter Y: "))
size = int(input("Enter a size of square: "))

root5 = Tk()
root5.title('Task-5')

root5.geometry('800x800')
fivethCanvas = Canvas(root5, bg='white', width=800, height=800)
fivethCanvas.pack()

fivethCanvas.create_rectangle(x, y, x+size, y+size, fill="#D6B204", outline="")
fivethCanvas.create_oval(x, y, x+size, y+size, fill="green", outline="", width=5)
fivethCanvas.create_oval(x-20, y-20, x+size+20, y+size+20, fill="", outline="red", width=5)

fivethCanvas.mainloop()

#Задание 6

root6 = Tk()
root6.title('Task-6')

root6.geometry('330x115')
sixthCanvas = Canvas(root6, bg='white', width=330, height=115)
sixthCanvas.pack()

sixthCanvas.create_polygon((10, 20), (111, 20), (86, 64), (36, 64), fill="red", outline="black")
sixthCanvas.create_polygon((127, 39), (166, 12), (205, 40), (189, 83), (142, 83), fill="yellow", outline="black")
sixthCanvas.create_polygon((225, 36), (245, 36), (245, 16), (290, 16), (290, 36), (310, 36), (310, 77), (290, 77), (290, 97), (245, 97), (245, 77), (225, 77), (225, 36), fill="green", outline="black")

sixthCanvas.mainloop()

#Задание 7

root7 = Tk()
root7.title('Task-7')

root7.geometry('800x600')
seventhCanvas = Canvas(root7, bg='black', width=800, height=600)
seventhCanvas.pack()

# lines
seventhCanvas.create_oval(-400, -50, 225, 700, fill="", outline="white", width=2)
seventhCanvas.create_oval(-400, -50, 315, 700, fill="", outline="white", width=2)
seventhCanvas.create_oval(-400, -50, 405, 700, fill="", outline="white", width=2)
seventhCanvas.create_oval(-400, -50, 510, 700, fill="", outline="white", width=2)
seventhCanvas.create_oval(-400, -50, 590, 700, fill="", outline="white", width=2)
seventhCanvas.create_oval(-400, -50, 710, 700, fill="", outline="white", width=2)
seventhCanvas.create_oval(-400, -50, 840, 700, fill="", outline="white", width=2)
seventhCanvas.create_oval(-400, -50, 1000, 700, fill="", outline="white", width=2)

seventhCanvas.create_oval(335, 170, 432, 266, fill="", outline="white")
seventhCanvas.create_oval(400, 110, 495, 195, fill="", outline="white")


seventhCanvas.create_oval(-400, 25, 127, 550, fill="orange", outline="") # sun

seventhCanvas.create_oval(199, 330, 241, 372, fill="#F7CEAB", outline="") # jupiter
seventhCanvas.create_text(210, 378, text="Юпитер", fill="#F7CEAB", justify=CENTER, font="Verdana 8") # jupiter name

seventhCanvas.create_oval(294, 270, 341, 318, fill="#DCA462", outline="")
seventhCanvas.create_text(310, 330, text="Венера", fill="#DCA462", justify=CENTER, font="Verdana 8")

seventhCanvas.create_oval(364, 195, 408, 239, fill="#356848", outline="")
seventhCanvas.create_text(378, 250, text="Земля", fill="#356848", justify=CENTER, font="Verdana 8")

seventhCanvas.create_oval(342, 172, 361, 192, fill="#404040", outline="")
seventhCanvas.create_text(347, 200, text="Луна", fill="#404040", justify=CENTER, font="Verdana 8")

seventhCanvas.create_oval(436, 134, 473, 171, fill="#C98E65", outline="")
seventhCanvas.create_text(450, 180, text="Марс", fill="#C98E65", justify=CENTER, font="Verdana 8")

seventhCanvas.create_oval(499, 131, 567, 199, fill="#9C6843", outline="")
seventhCanvas.create_text(530, 210, text="Юпитер", fill="#9C6843", justify=CENTER, font="Verdana 8")

seventhCanvas.create_oval(584, 100, 658, 173, fill="#F5E5A0", outline="")
seventhCanvas.create_oval(572, 129, 670, 147, fill="#7f512f", outline="")
seventhCanvas.create_oval(585, 110, 657, 140, fill="#F5E5A0", outline="")
seventhCanvas.create_text(615, 180, text="Сатурн", fill="#F5E5A0", justify=CENTER, font="Verdana 8")

seventhCanvas.create_oval(660, 44, 693, 128, fill="", outline="white")
seventhCanvas.create_oval(662, 59, 728, 121, fill="#7BA1B6", outline="")
seventhCanvas.create_text(690, 130, text="Уран", fill="#7BA1B6", justify=CENTER, font="Verdana 8")

seventhCanvas.create_oval(730, 9, 784, 63, fill="#5B7FC1", outline="")
seventhCanvas.create_text(750, 70, text="Нептун", fill="#5B7FC1", justify=CENTER, font="Verdana 8")

seventhCanvas.create_oval(411, 113, 427, 129, fill="#A0522D", outline="#8B4513")
seventhCanvas.create_text(414, 135, text="Деймос", fill="#A0522D", justify=CENTER, font="Verdana 8")

seventhCanvas.create_oval(475, 115, 489, 131, fill="#A0522D", outline="#8B4513")
seventhCanvas.create_text(484, 135, text="Фобос", fill="#A0522D", justify=CENTER, font="Verdana 8")

seventhCanvas.mainloop()

