
class A:
    def funcA(self):
        print("This is the class A.")

class D:
    def funcD(self):
        print("This is the Class D.")

class B(A):
    def funcB(self):
        print("This is the class B.")

class C(A, D):
    def funcC(self):
        print("this is the class C.")


# Note In python class always be callable.

a = A()
a.funcA()

b = B()
b.funcA()
b.funcB()

c = C()
c.funcA()
c.funcC()
c.funcD()

d = D()
d.funcD()