
class Student:
    school = "BzS" #This is the Class variable 
    def __init__(self,m1,m2,m3): #This is a constructor of the class 
        self.m1= m1
        self.m2= m2
        self.m3= m3
        self.lap = self.Laptop()
    
    @classmethod # This is a decorator for changing the class Variable
    def info(cls):
        return cls.school
    
    def ave(self):
        return (f"The average is :-{(self.m1+self.m2+self.m3)/3}")
    def marks(self):
        return ("The marks are {},{},{} ".format(self.m1, self.m2, self.m3))
    class Laptop:
        def __init__(self, brand, ram, cpu):
            self.brand = brand
            self.ramram =ram 
            self. cpu = cpu
        def show(self):
            return(f'Brand is{brand}, ram is {ram}, cpu is {cpu}')
        
akshay = Student(10, 20, 30)
jamini = Student(30, 40, 10)


