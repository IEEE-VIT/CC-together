//A string has maximum strength when it is sorted alphabetically
//as the higher indexes get multiplied with the largest values, thereby increasing the sum

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        string s;
        cin>>s;
        int a[s.length()];
        fill_n(a,s.length(),0);
        for (int j=0;j<s.length();j++){
            a[j]=(int)s[j]; //Array containing the ascii values of the characters in the string
        }
        sort(a,a+s.length());//sorting the array using a built-in function
        int sum=0;
        for (int j=0;j<s.length();j++){
            sum+=((j+1)*(a[j]-96));
            //calculating the sum by multiplying the index with the alphabetic value of the letter
        }
        cout<<sum<<"\n";//displaying the result
    }
    return 0;
}
