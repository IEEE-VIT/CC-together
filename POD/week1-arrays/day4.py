
for _ in range(int(input())):    
    n,s = map(int,input().split())
    arr = list(map(int,input().split()))
    #before start setting the indices of the subarray
    i0,j0=-1,-1
    for i in range(n):
        #setting sum as the first element of the subarray
        su = arr[i]
        try:
            #checking for an index j so that sum of arr[i:j] is the req sum
            for j in range(i+1,n):
                su += arr[j]
                #if the sum is required sum set the indices of i and j
                if su == s:
                    i0 = i
                    j0 = j
                    break
                
        except:
            pass                    
        if j0!= -1:
            print(i0+1,j0+1)
            break
    else:
        print(-1)
