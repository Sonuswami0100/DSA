#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    if(n == 0 || n == 1) return true;

    return arr[n-1] >= arr[n-2] && issorted(arr,n-1);
}
int main(){
    int arr[] = {1,2,5,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(issorted(arr,n)){
        cout<<"Array is sorted!";
    }else{
        cout<<"oops is not sorted!";
    }

return 0;
}