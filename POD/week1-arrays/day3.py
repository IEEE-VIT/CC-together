class Solution:
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        ls=[]
        for x,y in zip(l,r): # to select the starting and ending elements
            c=1
            n=nums[x:y+1]
            l1=set({})
            n=sorted(n)
            for j in range(1,len(n)):
                l1.add(n[j]-n[j-1])
                if len(l1)>1: # if the difference between any two number changes the length of l1 will also change
                    ls.append(False)
                    c=0
                    break
            if c!=0:
                ls.append(True)
        return ls    