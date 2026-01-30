class Bank:
    def _init_(self):
        self.accounts = {}  
        self.balances = {}

    def create_account(self):
        username = input("Enter Username: ")
        if username in self.accounts:
            print("Account already exists!")
            return
        password = input("Enter Password: ")
        self.accounts[username] = password
        self.balances[username] = 0
        print("Account created successfully!")

    def login(self):
        username = input("Enter Username: ")
        password = input("Enter Password: ")

        if username in self.accounts and self.accounts[username] == password:
            print(f"Welcome {username}")
            self.user_menu(username)
        else:
            print("Invalid login details!")

    def user_menu(self, username):
        while True:
            print("\n----- Account Menu -----")
            print("1. Deposit")
            print("2. Withdraw")
            print("3. Check Balance")
            print("4. Logout")

            choice = input("Enter choice: ")

            if choice == '1':
                amt = int(input("Enter deposit amount: "))
                self.balances[username] += amt
                print("Amount Deposited")
            elif choice == '2':
                amt = int(input("Enter withdrawal amount: "))
                if amt > self.balances[username]:
                    print("Insufficient funds")
                else:
                    self.balances[username] -= amt
                    print("Amount Withdrawn")
            elif choice == '3':
                print(f"Balance = {self.balances[username]}")
            elif choice == '4':
                print("Logged out successfully!")
                break
            else:
                print("Invalid option")


def run_bank_system():
    bank = Bank()
    while True:
        print("\n##################")
        print("Welcome to GBI Bank System")
        print("1. Create Account")
        print("2. Login")
        print("3. Exit Program")
        print("######################")

        main_choice = input("Enter your Choice (1-3): ")

        if main_choice == '1':
            bank.create_account()
        elif main_choice == '2':
            bank.login()
        elif main_choice == '3':
            print("System Shutting down.....")
            break
        else:
            print("Invalid choice..")


run_bank_system()