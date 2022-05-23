class Solution:
    # @param A : list of integers
    # @return an integer
    def solve(self, A):
        for i in range(len(A)):  #iterating through the list
            if A[i] in A[i+1:]:  #checking if the element is repeated or not
                return A[i]
        return -1
