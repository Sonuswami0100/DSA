#include<iostream> //one bug in this program
using namespace std;
int main(){
    int arr1[4] = {1,2,5,2}; //repeated value bug
    int arr2[3] = {1,5,2};
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 3;j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
        
    }
    return 0; //qestion is panding
}