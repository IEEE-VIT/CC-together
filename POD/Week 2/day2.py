def isomorphic(s,t):
    if len(s)!=len(t):
        return False
      #dictionaries to store 1-on-1 mappings
    d1 = {}
    d2 = {}
    for i in range(len(s)):
      #check if mapping between either s[i] or t[i] exists
        if s[i] not in d1 and t[i] not in d2:
            #create the mapping
            d1[s[i]] = t[i];
            d2[t[i]] = s[i];
        else:
            #check if the already existing mapping matches current one
            if d1[s[i]] != t[i] or d2[t[i]] != s[i]:
                return False
    return True

print(isomorphic(input(),input()))
