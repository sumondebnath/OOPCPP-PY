
class Animal:
    name = ""

    def __init__(self, name):
        self.name = name
        print("This is constractor!")
    
    def eat(self):
        print(f"{self.name} can eat!")

    def sleep(self):
        print(f"{self.name} can sleep!")


cat = Animal("Kitty")
print(cat.name)
cat.eat()
cat.sleep()