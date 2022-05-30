class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        d = dict()
        flag = True
        l = len(t)
        for i in range(l):
            if s[i] not in d.keys():
                if t[i] in d.values():
                    flag = False
                    break
                d[s[i]] = t[i]
            elif d[s[i]] != t[i]:
                flag = False
                break
        return flag
