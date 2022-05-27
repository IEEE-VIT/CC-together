# Day 4
# Question : https://www.hackerearth.com/problem/algorithm/subarray-with-given-sum-5/
# 27/05/2022
t=int(input())
for i in range(t):
    n,s=list(map(int,input().split()))#n=no. of elements;s= required sum
    l=list(map(int,input().split()))
    listu=[]
    start=SuM=end=0;#Keep removing first elements in the SuM and add new element if Sum>s else keep adding new elements.
    while end<n: 
        if s>SuM : 
            SuM+=l[end]
            end+=1
        if SuM==s:
            print(f"{start+1} {end}")
            break
        elif SuM>s:
            SuM-=l[start]
            start+=1
    else:
        if l[-1]==s:
            print(f"{end} {end}")
        else:
            print(-1)
