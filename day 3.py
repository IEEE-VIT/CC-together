class Solution:
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        res = list()
        for i in range(len(l)):
            sub_array = nums[l[i]:r[i]+1]  #sub array
            sub_array.sort() #sorting the array
            flag = True
            for j in range(len(sub_array)-1):
                if sub_array[0] - sub_array[1] != sub_array[j] - sub_array[j+1]:  #checking if the list is in Arithmetic Progression
                    flag = False
                    break
            if flag is False:
                res.append(False)
            else:
                res.append(True)
        return res
