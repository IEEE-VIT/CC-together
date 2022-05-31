def isomorphic(s,t):
    if len(s)!=len(t):
        return False
     #creating a one-on-one mapping
    d1 = {}
    d2 = {}
    for i in range(len(s)):
        if s[i] not in d1 and t[i] not in d2:
          #if they are not there add new one on one mapping
            d1[s[i]] = t[i];
            d2[t[i]] = s[i];
        else:
            #check that it is the same mapping
            if d1[s[i]] != t[i] or d2[t[i]] != s[i]:
                return False
    return True

print(isomorphic(input(),input()))
