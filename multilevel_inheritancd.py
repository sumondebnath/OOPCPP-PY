
class A:
    name = ""

    def __init__(self, name):
        self.name = name

    def isName(self):
        print(self.name)

class B(A):
    value = 0

    def __init__(self, name, value):
        self.value = value
        super().__init__(name)

    def isValue(self):
        print(self.value)

class C(B):
    isTrue = False

    def __init__(self, name, value, isTrue):
        self.isTrue = isTrue
        super().__init__(name, value)


obj = C("Sumon Debnath", 110, True)
# obj.isTrue = True

obj.isName()
obj.isValue()
print(obj.isTrue)