#include <iostream>
using namespace std;
string SchoolQueue(){
    string s1;
    int n,t;
    cin>>n>>t>>s1;
    while(t--){
        for(int i = 1;i<n;i++){
            if (s1[i-1] == 'B'&& s1[i]== 'G'){
                s1[i-1] = 'G';
                s1[i] ='B';
                i++;
            }
        }
    }
    return s1;
}


int main(){
    cout<<SchoolQueue();
 }

 //time complexity: O(n^2)
