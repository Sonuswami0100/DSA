#include<iostream>
#include<vector>
using namespace std;
void print_arr(int arr[],int n){
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubble_sort(int arr[],int n){
    int isswap = false;
    for(int i = 0;i < n-1;i++){
        for(int j = 0;j < n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }
    }
    if(!isswap){
        return;
    }
}
void selection_sort(int arr[],int n){
    for(int i = 0;i < n-1;i++){
        int small = i;
        for(int j = i+1;j < n;j++){
            if(arr[j] < arr[small]){
                small = j;
            }
        }
        swap(arr[i],arr[small]);
    }
}
void insertion_sort(int arr[],int n){
    for(int i = 1;i < n;i++){
        int curr = arr[i];
        int prv = i-1;
        while(prv > 0 && arr[prv] > curr){
            arr[prv + 1] = arr[prv];
            prv--;
        }
        arr[prv+1] = curr;
    }
}
int main(){
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"selection sort = ";
    selection_sort(arr,n);
    print_arr(arr,n);
    cout<<endl;
    cout<<"bubble sort sort = ";
    selection_sort(arr,n);
    print_arr(arr,n);
    cout<<endl;
    cout<<"Insertion sort sort = ";
    insertion_sort(arr,n);
    print_arr(arr,n);
}