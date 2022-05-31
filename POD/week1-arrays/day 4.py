t = int(input())
for i in range(t):
    n,s = map(int,input().split())
    num_array = list(map(int,input().split()))
    start = 0
    sum_of_subarray = 0 # variable to store sum of sub_array
    flag = False
    for i in range(n):
        sum_of_subarray += num_array[i]
        while(sum_of_subarray > s):  # if sum exceeds desired sum, we shift the start to the right by subtracting the values
            sum_of_subarray -= num_array[start]
            start +=1
        if sum_of_subarray == s:
            flag = True
            break
    if flag is True:
        print(start+1,i+1)
    else:
        print(-1)
