#include <iostream>
using namespace std;
int main()
{
    int n;
    int pos_i=0,pos_j=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>n;
            if(n==1)
            {
                pos_i=i;
                pos_j=j;
            }
        }
    }
    pos_i=abs(pos_i-2);
    pos_j=abs(pos_j-2);
    cout<<pos_i+pos_j<<endl;
    return 0;
}
//Time complexity:O(n^2)