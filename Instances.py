import random

class Dog:
    info = "A furry companion"

    def __init__(self, name, trick):
        print("I'm ALIVE")
        self.lucky_number = random.randint(1,10)
        self.name = name
        self.trick = trick


dog1 = Dog("Uma", "Sit")
dog2 = Dog("Kona", "Rollover")

#print(dog1.lucky_number)
#print(dog2.lucky_number)

#dog1.name = "Clifford"

print(dog1.name, dog1.trick)
print(dog2.name, dog2.trick)