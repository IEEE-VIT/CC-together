# Day 3
# Question : https://www.codechef.com/START3A/problems/HIRETEST
# 26/05/2022
def ap_checker(Lisht):
    diff=Lisht[1]-Lisht[0] #finding C.D as constraints say number_elemnts in num>=2;
    for i in range(1,len(Lisht)-1):
        if Lisht[i+1]-Lisht[i]!=diff:
            return 0
    return 1 #func checks for Ap as name states.
class Solution(object):
    def checkArithmeticSubarrays(self,nums, l, r): #l,r have m integers; nums has n integers
        bool_list=[]
        for i,j in zip(l,r):
            subArray=nums[i:j+1]
            subArray=sorted(subArray)
            bool_list.append(ap_checker(subArray))
        return bool_list