t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int,input().split()))
    c = 0
    #finding the bigger of the first and second element
    p = max(l[:1])
    for i in range(n):
            #condition for record breaking:
            #index 0: day 1 visitors is more than day 2
            #day 2 to day n-1(day i): visitors is max of the subarray [0:i], and visitors on day i is more than i+1
            #day n(last day) (index n-1):visitors is max of the full array 
            if (i == 0 or l[i] > p) and (i == n-1 or l[i]> l[i+1]):               
                c+=1
            #updating the maximum no of visitors from the  subarray[0:i]
            if l[i]>p:
                p = l[i]
        
    print("Case #{}: {}".format(_+1,c))
