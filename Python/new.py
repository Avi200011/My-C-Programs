# This is the Function for the Prime Partition
def primepartition(inp):
    def is_prime(x):
        for i in range(2, x-1):
            if x%i == 0:
                return False
                break
        else:
            return True
    for i in range(1, inp//2):
        if (is_prime(i) and is_prime(inp-i)):
            return True
            break
    else:
        return False

#This is the function for the Rotate list

def  rotatelist(lst, rot):
    for i in range(rot):
        temp = lst[0:1]
        lst= lst[1:]+temp
    return lst
#This is the function for the matching

def matched(s):
    b_counter = 0
    i = 0
    while (b_counter >= 0 and i < len(s)):
        if s[i] == '(':
            b_counter += 1
        elif s[i] == ')':
            b_counter -= 1
        i += 1
    if b_counter == 0:
        return True
    else:
        return False
    
    
if __name__ == "__main__":
    print(rotatelist([1,2,3,4,5],12))