
def IsPrime(x):
    for i in range(2, x-1):
        if x%i ==0:
            return False
            break
    else:
        return True
        

def sum_prime(inp):
    
    for i in range(1, inp//2):
        if (IsPrime(i) and IsPrime(inp-i)):
            print(f"The number {inp} is the sum of {i} + {inp-i} prime numbers")
            break
    else:
        print("This is not possible")
        
if __name__=="__main__":
    print(IsPrime(45))
    sum_prime(45)