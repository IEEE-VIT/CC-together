#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string a="";
    for(int i=0;i<s.size();i++)
    {
        if (s[i]=='-' && s[i+1]=='-')
        {
            a+='2';
            i++;
        }
        else if(s[i]=='.')
        {
            a+='0';
        }
        else if(s[i]=='-'&&s[i+1]=='.')
        {
            a+='1';
            i++;
        }
    }
    cout<<a<<endl;
    return 0;
}
//time complexity-O(n)