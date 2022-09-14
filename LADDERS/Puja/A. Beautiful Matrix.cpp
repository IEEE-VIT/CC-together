#include <iostream>
using namespace std;
int beautiful(){
    int arr[5][5];
    int i,j,i0,j0;
    for(i = 0;i<5;i++){
        for(j = 0;j<5;j++){
            cin>>arr[i][j];
            if (arr[i][j] == 1){
                i0 = i;
                j0 = j;
            }
        }
    }
    return (abs(i0-2) + abs(j0-2) );

}


int main(){
    cout<<beautiful();
}

//time complexity: O(n^2)
