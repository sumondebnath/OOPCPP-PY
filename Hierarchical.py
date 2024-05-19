
class Human:
    name = ""

    def __init__(self, name):
        self.name = name

    def func(self):
        print(f"{self.name} inside the func")

class Male(Human):
    gender = ""

    def __init__(self, name, gender):
        self.gender = gender
        super().__init__(name)

    def male_func(self):
        print(f"{self.name} gender is : {self.gender}")

class Female(Human):
    gender = ""

    def __init__(self, name, gender):
        self.gender = gender
        super().__init__(name)

    def female_func(self):
        print(f"{self.name} gender is : {self.gender}")


print("human class")
human = Human("super human")
print(human.name)
human.func()


print("male class")
print()
male = Male("sumon", "male")
print(male.name)
male.func()
male.male_func()


print("female class")
print()
female = Female("s***", "female")
print(female.name)
female.func()
female.female_func()