#include<iostream>
using namespace std;
int bs(int arr[],int tar,int st,int end){
    if(st <= end){
        int mid = st + (end - st)/2;

        if(arr[mid] == tar)return mid;
        if(arr[mid] <= tar)return bs(arr,tar,mid+1,end);
        else return bs(arr,tar,st,mid-1);
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int tar = 3;
    int st = arr[0];
    int end = arr[n-1];
    cout<<bs(arr,tar,st,end);

return 0;
}