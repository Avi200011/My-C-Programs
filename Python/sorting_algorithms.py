# This is all type of sorting algoin the python

def selection_sort(lst):
    for start in range( len(lst)):
        min_pos = start
        for i in range(start, len(lst)):
            if lst[i] < lst[min_pos]:
                min_pos = i
        lst[start],lst[min_pos] = lst[min_pos] , lst[start]
    return lst


def insertion_sort(lst):
    for slice_end in range(len(lst)):
        pos = slice_end
        while (pos>0 and lst[pos]<lst[pos-1]):
            lst[pos],lst[pos-1] = lst[pos-1], lst[pos]
            pos -= 1

    return lst      
        



if __name__ == '__main__': 
    
    arr = [2,3,1,34,41,1,0,56,34]
    print(selection_sort(arr))
    