#include <iostream>
#include <string.h>
using namespace std;


int beautifulYear(){
    int year;
    cin>>year;
    int a,b,c,d;
    for(int i = year+1;true;i++){
        a = i/1000;
        b = (i/100)%10;
        c = (i/10)%10;
        d = i%10;
        if (a!=c &&a!=d && a!=b && b!=c &&c!=d &&b!=d){
            return i;
        }
    }
}
int main(){
    cout<<beautifulYear();
}


//time complexity : O(n)
