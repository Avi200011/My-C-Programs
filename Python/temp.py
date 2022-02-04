

def snake_ladder():
    lst=[x for x in input().split(',')]
    lst = [y.split(":") for y in lst]
    snake = 0
    ladder = 0
    for el in lst:
        if int(el[0]) > int(el[1]):
            snake+=1
        else:
            ladder+=1
    print(snake, ladder)   
    # dic = {int(x[0]):int(x[-1]) for x in input().split(',')}
    # snake = 0
    # ladder =0
    # for key in dic:
    #     if key>dic[key]:
    #         snake+=1
    #     elif key<dic[key]:
    #         ladder+=1
            
    # print(snake, ladder)
        # print("The keys are :-", key)
        # print("the values are :- ", dic[key])
        # print()






if __name__ == '__main__': 
    snake_ladder()