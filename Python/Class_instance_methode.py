print('Class methode and the Instance methode')


class Student:
    # This is a Constructor for the student Class
    def __init__(self, n=' ', m=0):
        self.name = n
        self.marks = m

    # This is the instance Methode

    def display(self):
        print('Your Details are ...')
        print('The Candidate Name:- ', self.name)
        print('Your marks is:- ', self.marks)

    # Calcularte the Grade according to the marks

    def Calculate(self):
        if (self.marks >= 600):
            print("Congratulations ")
            print("You Got the First Grade:- ")
        elif (self.marks >= 500):
            print("You Got the Second Grade:- ")
        elif (self.marks >= 350):
            print("You Got the  Grade:- ")
        else:
            print("You are Failled ")


# Creat instance from the keyboard
n = int(input('How many students? : = '))

i = 0
while (i < n):
    name = input("Enter the Candidate name:- ")
    marks = int(input("Enter the Marks of the Canditate :- "))

    # Creat student class instance and store data

    s = Student(name, marks)
    s.display()
    s.Calculate()
    i += 1
    print("The program has ended..!!")
