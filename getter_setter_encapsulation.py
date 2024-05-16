

class Bank:
    def __init__(self, name, acc_no, balance, password):
        self.name = name
        self.acc_no = acc_no
        self._balance = balance
        self.__password = password
    
    def getter(self):
        return f"{self._balance}, {self.__password}"
    def setter(self, balance):
        self._balance = balance



ific = Bank("sumon", 100, 0, None)

ific.name = "sumon debnath"
ific.acc_no = 101
ific.setter(100)

print(ific.name, ific.acc_no, ific.getter())