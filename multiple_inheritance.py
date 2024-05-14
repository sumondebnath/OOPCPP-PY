

class A:
    name = ""

    def Afunc(self):
        print(f"{self.name} class A.")

class B:
    number = 0

    def Bfunc(self):
        print(f"{self.number} class B.")

class C(A, B):

    def __init__(self, name, number):
        self.name = name
        self.number=number


obj =  C("TEN", 10)

obj.Afunc()
obj.Bfunc()
print(obj.name, obj.number)