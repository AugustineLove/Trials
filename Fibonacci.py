def fib():
    print("Enter number of list of the series you want ")
    n=int(input())
    a=0
    b=1
    print(a)
    print(b)

    for i in range (0,n-2):
        c=a+b
        a=b
        b=c
        print(c)

fib()
