#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& arr,int st,int end){
    int idx = st-1,pivot = arr[end];
    for(int i = st;i < end;i++){
        if(arr[i] <= pivot){
            idx++;
            swap(arr[i],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}
void quick_sort(vector<int>& arr,int st,int end){
    if(st < end){
        int pividx = partition(arr,st,end);
        quick_sort(arr,st,pividx-1);//left part
        quick_sort(arr,pividx+1,end);//right part
    }
}

int main(){
    vector<int> arr = {2,1,3,5,6,4};
    quick_sort(arr,0,arr.size()-1);
    cout<<"Sorted array is: ";
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Time complexity: O(nlogn)"<<endl;
    cout<<"Space complexity: O(logn)"<<endl;
    cout<<"     THANK YOU!"<<endl;

return 0;
}