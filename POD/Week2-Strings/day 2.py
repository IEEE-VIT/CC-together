t = int(input())  #number of test cases input
for i in range(t):
    string = sorted(input()) #sorting in alphabetical order
    s = 0
    for j in range(len(string)):
        s += (j+1)*(ord(string[j]) - 96) #adding product of position of letter in string and position of letter in the alphabets
    print(s) #printing the final power
