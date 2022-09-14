#include <iostream>
using namespace std;
string equilibrium(){
    int sums[3] = {0,0,0};
    int n;
    cin>>n;
    int i,j,x;
    for(i = 0;i<n;i++){
        for(j = 0;j<3;j++){
            cin>>x;
            sums[j] += x;
        }
    }
    for(j = 0;j<3;j++){
        if (sums[j]!= 0){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    cout<<equilibrium();
}


//time complexity:  O(n^2)
