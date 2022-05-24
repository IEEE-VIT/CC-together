# Day 2
# Question : https://www.codechef.com/START3A/problems/HIRETEST
# 25/05/2022
t=int(input())
for _ in range(t):
    n,m=list(map(int,input().split())) #n=number of candidates;m=number of problems
    x,y=list(map(int,input().split())) #X=Full;#y=Partial
    ans="" # string in which final answer is stored.
    for j in range(n):
        s=list(input())
        f_count=s.count("F")
        p_count=s.count("P")
        if f_count>=x or f_count==x-1 and p_count>=y :
            ans+="1"
        else:
            ans+="0"
    print(ans)
        