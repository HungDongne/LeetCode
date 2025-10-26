from typing import List


class Bank:
    def __init__(self, balance: List[int]):
        self.accounts = balance
        self.n = len(balance)

    def isValidAccount(self, account: int) -> bool:
        if 0 <= account - 1 < self.n:
            return True
        else:
            return False

    def transfer(self, account1: int, account2: int, money: int) -> bool:
        if not (self.isValidAccount(account1) and self.isValidAccount(account2)):
            return False
        if self.accounts[account1 - 1] - money >= 0:
            self.accounts[account1 - 1] -= money
            self.accounts[account2 - 1] += money
            return True
        else:
            return False

    def deposit(self, account: int, money: int) -> bool:
        if not self.isValidAccount(account):
            return False

        self.accounts[account - 1] += money
        return True

    def withdraw(self, account: int, money: int) -> bool:
        if not self.isValidAccount(account):
            return False

        if self.accounts[account - 1] - money >= 0:
            self.accounts[account - 1] -= money
            return True
        else:
            return False


# Your Bank object will be instantiated and called as such:
# obj = Bank(balance)
# param_1 = obj.transfer(account1,account2,money)
# param_2 = obj.deposit(account,money)
# param_3 = obj.withdraw(account,money)
