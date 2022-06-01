class Solution(object):
    def minimumSwap(self, s1, s2):
        x,y = 0,0
        swaps = 0
        for i in range(len(s1)):
        #ignore all the x and y which are equal
            if s1[i]!=s2[i]:
                if s1[i]=="x":
                    x+=1
                else:
                    y+=1               
            
        #if the total number of x and y we need to swap is odd, we cant swap to form 2 equak strings
        if ((x+y)%2 ==1):
            return -1
        else:
            #we can group each to be swapped into pairs of xx or yy
            #then it will be xx(s1) and yy(s2) or vice versa which requires 1 swap
            #so for total xx(s1) and yy(s2) pairs we can get it as x//2 + x//y
            #the remaining will be odd number of x(s1) and y(s2) or vice versa which requires 1 swap
            #so for total xy and yx it is x%2(reminder when x//2) + y%2(reminder when y//2)
            
            return y//2+y%2+x//2+x%2
