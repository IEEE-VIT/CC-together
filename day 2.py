t = int(input())
for i in range(t):
    n,m = map(int,input().split()) #input n and m
    x,y = map(int,input().split()) #input x and y
    for j in range(n):
        res = list(input())
        f = res.count('F') #counting frequency of F
        p = res.count('P') #counting frequency of P
        if ((f >= x) or (f >= x-1 and p >= y)):
            print("1",end="")
        else:
            print("0",end="")
    print()
