
class Animal:
    name = ""
    weight = 0

    def Eat(self):
        print(f"{self.name} can eat")
    

class Cat(Animal):
    sound = False

    def __init__(self, name, weight, sound):
        self.name = name
        self.weight = weight
        self.sound = sound



kitty = Cat("Kitty", 12.5, True)

print(kitty)
print(kitty.name, kitty.weight, kitty.sound)
kitty.Eat()