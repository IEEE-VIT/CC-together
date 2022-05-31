for i in range(int(input())):
    s=sorted(list(map(str,input())))
    p=0
    for j in range(len(s)):
        p+=(j+1)*(ord(s[j])-96)
    print(p)    
    
