import random

class Dog:
    info = "A furry companion"

    def __init__(self, name, color):
        print("I'm ALIVE")
        self.lucky_number = random.randint(1,10)
        self.name = name
        self.color = color

    def bark(self):
        print(f"woof! My name is {self.name} and my lucky number is {self.lucky_number}")
    
    def size(self):
        print(f"I'm a {self.color} dog!")



dog1 = Dog("Uma", "red")
dog2 = Dog("Kona", "brown")

dog1.bark()
dog2.bark()

dog1.size()
dog2.size()

class Square:
    sides = 4

    def __init__(self, height):
        self.height = height
        print(f"The height is {self.height} inches.")
    
    def area(self):
        return self.height * self.height

myheight = Square(8)
print(myheight.area())