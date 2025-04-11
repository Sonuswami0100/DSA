#include<iostream>
using namespace std;
pair<int,int> linearSearch(int arr[][3],int tar){
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            if(arr[i][j] == tar){
                return {i,j};
            }
        }
    }
}
int main(){
    int arr[3][3] = {{1,2,3},{1,2,3},{1,5,3}};
    int target = 5;
    pair<int,int> indx = linearSearch(arr,target);
    cout<<indx.first<<" "<<indx.second;
}