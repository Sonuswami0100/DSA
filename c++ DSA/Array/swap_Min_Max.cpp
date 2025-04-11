#include<iostream>
#include<climits>
using namespace std;
int swapMin(int arr[] , int size){
    int min = INT_MAX,max = INT_MIN;
    for(int i = 0;i < size;i++){
        if(arr[i] < min){
            min = i;        //store the min value index
        }
        if(arr[i] > max){
            max = i;       //store the max value index
        }
    }
    swap(arr[min],arr[max]); //swap min and max index value
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    swapMin(arr,size);    //arr is pass by reference
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}