import random

class Animal:
    info = "A living organism that feeds on organic matter."

    def __init__(self, name):
        print("An animal is created")
        self.name = name

class Dog(Animal):
    info = "A furry companion"

    def __init__(self, name):
        super().__init__(name)
        print(f"A dog {self.name} is created")
        self.lucky_number = random.randint(1,10)
        self.fur = ""

    def bark(self):
        print(f"woof! My name is {self.name} and my lucky number is {self.lucky_number}")

class Bulldog(Dog):
    def __init__(self, name):
        super().__init__(name)
        print(f"A bulldog {self.name} is created")

    
dog1 = Dog("Uma")
print()
dog2 = Bulldog("Terry")
print()

class Shape:
    sides = 1

class Square(Shape):
    sides = 4

    def __init__(self, height):
        self.height = height
        print(f"The height is {self.height} inches.")
    
    def area(self):
        return self.height * self.height

myheight = Square(8)
print(myheight.area())

