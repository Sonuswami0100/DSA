#include<iostream>
#include<climits>
using namespace std;
int maxrowsum(int arr[][3]){
    int maxrow = INT_MIN;
    for(int i = 0;i < 3;i++){
        int sum = 0;
        for(int j = 0;j < 3;j++){
            sum += arr[i][j];
        }
        maxrow = max(maxrow,sum);
    }
    return maxrow;
}
int main(){
    int arr[3][3] = {{2,1,3},{2,6,3},{1,1,4}};
    cout<<maxrowsum(arr);

}