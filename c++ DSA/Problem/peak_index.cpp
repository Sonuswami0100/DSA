#include<iostream>
#include<vector>
using namespace std;
int peakIndex(vector<int> arr ,int n){
    int st = 1,end = n-1;
    while (st <= end)
    {
        int mid = st + (end - st)/2;
        if(arr[mid-1] < arr[mid] && arr[mid+1] > arr[mid]){  //we check peak index left and right value
            return mid;
        }
        else if(arr[mid - 1] < arr[mid] ){ //Increasing order
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    
}
int main(){
    vector<int> arr = {0,3,8,9,5,2};
    int n = arr.size();
    cout<<peakIndex(arr,n)<<endl;
}