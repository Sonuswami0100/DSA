#include<iostream>
using namespace std;
void uniqueVal(int arr[] , int size){
    for(int i = 0;i < size;i++){
        bool isunique = true;
        for(int j = 0;j < size;j++){
            if(i != j && arr[i] == arr[j]){
                isunique = false;
                break;
            }
        }
        if(isunique){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[5] = {1,1,3,1,5};
    int size = 5;
    uniqueVal(arr,size);
    return 0;
}