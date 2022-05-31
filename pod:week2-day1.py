class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        l1=len(s)
        l2=len(t)
        if l1==l2:
            charCount = dict()
            c = "a"
            #iterating over str1 and str2
            for i in range(len(s)):
            #if str1[i] is a key in charCount
                if s[i] in charCount:
                    c = charCount[s[i]]
                    if c != t[i]:
                        return False
                #if t[i] is not a value in charCount
                elif t[i] not in charCount.values():
                    charCount[s[i]] = t[i]
                else:
                    return False
            return True
        else:
            return False
        
