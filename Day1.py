# Day 1
# Question :https://www.interviewbit.com/problems/first-repeating-element/
# 24/05/2022
def solve(arr):
    d={}
    for i in arr:
        if i in d:
            d[i]+=1
        else:
            d[i]=1
    for i in arr:
        if d[i]>1:
            return(i)
    return(-1)



"""
Sol2:

def solve2(self,arr):
    d={}
    for i in arr:
        try:
            d[i]+=1
        except KeyError:
            d[i]=1
    for i in arr:
        if d[i]>1:
            return(i)
    return(-1)

"""