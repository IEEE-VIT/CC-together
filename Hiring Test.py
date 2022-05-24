t = int(input())
for i in range(t):
    n,m = map(int,input().split())
    x,y = map(int,input().split())
    for j in range(n):
        res = list(input())
        f = res.count('F')
        p = res.count('P')
        if ((f >= x) or (f >= x-1 and p >= y)):
            print("1",end="")
        else:
            print("0",end="")
    print()
