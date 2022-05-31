class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        d = dict()  #dictionary to allot characters of s as keys and characters of t as values
        flag = True
        l = len(t)
        for i in range(l):
            if s[i] not in d.keys():   #checking if the character of s has already been allotted to a character of t
                if t[i] in d.values(): #checking if character of t has been allotted to different character of s
                    flag = False
                    break
                d[s[i]] = t[i]     #alloting a character of s to character of t
            elif d[s[i]] != t[i]:  #checking if character of t is not equal to previously allotted character in dictionary
                flag = False
                break
        return flag
