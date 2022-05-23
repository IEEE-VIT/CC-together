class Solution:
    # @param A : list of integers
    # @return an integer
    def solve(self, A):
        if len(A) == len(set(A)): #no repeating elements
            return -1
        for i in range(len(A)):  #iterating through the list
            if A.count(A[i]) > 1:  #checking if the element is repeated or not
                return A[i]
