# This is the answers of the week 3 Data Structure

def remdup(lst):
    temp = []
    for i in lst:
        if i not in temp:
            temp.append(i)
    return temp

def  splitsum(lst):
    neg = []
    pos = []
    for i in lst:
        if i<0:
            neg.append(i**3)
        else:
            pos.append(i**2)
    return [sum(pos), sum(neg)]

import copy
def  matrixflip(mat, dim):
    c_mat = copy.deepcopy(mat)
    if dim =="h":
        for i in c_mat:
            i.reverse()
        return c_mat
    elif dim == "v":
        c_mat.reverse()
        return c_mat
    else:
        return c_mat
    
    
    
if __name__ == '__main__': 
    # print(matrixflip([[1,2],[3,4]], "h"))
    print(remdup([3,5,7,5,3,7,10]))
    