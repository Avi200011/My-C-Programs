# print("This is the basic programs in the pyhton")

def AramStrong_numbers(num):
    lst = [int(x) for x in str(num)]
    res = 0
    for i in lst:
        cube = pow(int(i), len(lst))
        res+=cube
    if res == num :
        print("The number {} is a Aramstrong Number".format(num))
    else:
        print("The number {} is not a Aramstrong Number".format(num))








if __name__ == '__main__': 
    AramStrong_numbers(153)
