
# copied by phitron oop class.

class Bank:
    def __init__(self, name, deposit):
        self.name = name                        # public
        self._branch = 'badda'                  # protected 
        self.__balance = deposit                # private

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance
    
    def withdraw(self, amount):
        if amount < self.__balance:
            self.__balance = self.__balance - amount
            return amount
        else:
            return f'Forkia taka nai'

sumon = Bank('Sumon Debnath', 100)
sumon.deposit(300)
print(sumon.get_balance())