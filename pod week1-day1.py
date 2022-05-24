class Solution: 
    def solve(self,A): 
        if len(A)==len(set(A)): #check if there are repeating elements
            return -1 
        for i in range(len(A)): #checking which element is repeating
            if A.count(A[i])>1: 
                return A[i]
