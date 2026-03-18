# ABSTRACTION and ENCAPSULATION :-
class Account :

    total_balance = 0
    def __init__(self,account_no,balance):
        self.balance = balance
        self.account_no = account_no
        print("Account no.                :", self.account_no)
        print("Current balance            :", self.balance, "$")
        Account.total_balance += self.balance
    @staticmethod
    def credit():
       
        Cre = float(input("Enter the credited ammount : "))
        Account.total_balance+= Cre
    @staticmethod
    def debit():
        deb = float(input("Enter the debit ammount    : "))
        Account.total_balance-= deb
    @staticmethod
    def Totalbalance():
        print("Total Balance              :",Account.total_balance, "$" )

A = Account(231020460,10000000000000)
A.credit()
A.debit()
# A.credit()
A.Totalbalance()