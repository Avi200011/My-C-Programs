def comp_lst():
    lst = [int(x) for x in input().split()]
    lst2 = [int(x) for x in input().split()]
    st1 = "".join(str(el) for el in lst)
    st2 = "".join(str(el) for el in lst2)
    if st1 == st2[:len(st1)]:
        print("yes")
    else:
        print("no")

def snake_ladder():
    my_dic = {int(x[0]):int(x[-1]) for x in input().split(',')}
    snake = 0
    ladder = 0
    for key, val in my_dic.items():
        if key>val:
            snake += 1
        elif key<val:
            ladder += 1
    print(snake,'',ladder)   
def win_com():
    board, lst1, d = input().split(','), input().split(','),{}
    pos = int(lst1[0])
    for c in board:
        r =  c.split(":")
        d[int(r[0])] = int(r[1])
    for a in range(len(lst1)):
        if pos in list(d.keys()):
            pos = d[pos]
        try:
            pos += int(lst1[a+1])
        except:
            pass
    if pos > 100 or pos == 100:
        print("Yes", end = '')
    else:
        print("No", end = '')

    
if __name__ == '__main__': 
    win_com()