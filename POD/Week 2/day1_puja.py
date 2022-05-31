
def isomorphic(s,t):
    if len(s)!=len(t):
        return False
    d1 = {}
    d2 = {}
    for i in range(len(s)):
        if s[i] not in d1 and t[i] not in d2:
            d1[s[i]] = t[i];
            d2[t[i]] = s[i];
        else:
            if d1[s[i]] != t[i] or d2[t[i]] != s[i]:
                return False
    return True

print(isomorphic(input(),input()))
