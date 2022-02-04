print('This is the programe for the GCD of the two numbers')


def gcd(a, b):
    fa = []
    fb = []
    cf = []
    for i in range(1, a+1):
        if a % i == 0:
            fa.append(a)

    for j in range(1, b+1):
        if a % j == 0:
            fb.append(b)
    for x in fa:
        if x in fb:
            cf.append(x)
    return cf[-1]


if __name__ == "__main__":
    inp1, inp2 = int(input("Enter Two number you want to GCD :- ")).split()
    print("The Gcd of the nuumber is :- %d".format(gcd(inp1, inp2)))
