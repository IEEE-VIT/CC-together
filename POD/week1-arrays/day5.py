t = int(input())
for i in range(t):
    n = int(input())
    visitors = list(map(int,input().split()))
    record = -1  #storing highest number of visitors
    count = 0  #counting number of record breaking days
    for j in range(n):
        if visitors[j] > record: #updating value of record
            record = visitors[j]
            if j==n-1 or visitors[j] > visitors[j+1]: #condition to consider a day as record breaking
                count += 1
    print("Case #{0}:".format(i+1),count)
