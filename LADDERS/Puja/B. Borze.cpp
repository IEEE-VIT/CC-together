#include <iostream>
#include <string.h>
using namespace std;
string borze(){
    int i,j,new_digit;
    new_digit = 0;
    string s1;
    cin>>s1;
    string s2 = "";
    for(i = 0;i<s1.length();i++){
        if(s1[i] == '.' &&!new_digit){
            s2 = s2+ "0";
        }
        else if(s1[i] == '.'){
            s2 = s2+ "1";
            new_digit = 0;
        }
        else if(s1[i] == '-' &&new_digit){
            s2 = s2+"2";
            new_digit = 0;
        }
        else{
            new_digit = 1;
        }
    }
    return s2;
    }

int main(){
cout<<borze();}

//time complexity : O(n)
