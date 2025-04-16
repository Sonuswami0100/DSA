#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int>& arr,int st,int mid,int end){
    vector<int> temp;
    int i = st,j = mid+1;
    int invcount = 0;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            invcount += (mid-i+1);
        }
    }
    // Copy remaining elements
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }
    // Copy back to original array
    for(int k = st;k <= end;k++){
        arr[k] = temp[k-st];
    }
    return invcount;
}
int mergesort(vector<int>& arr,int st,int end){
    if(st < end){
        int mid = st + (end-st)/2;
        int leftinv = mergesort(arr,st,mid);
        int rightinv = mergesort(arr,mid+1,end);

        int invcout = merge(arr,st,mid,end);
        return leftinv + rightinv + invcout;
    }
    return 0;
}

int main(){
    vector<int> arr = {6,3,5,2,7};
    int ans = mergesort(arr,0,arr.size()-1);
    cout<<"Inversion count is: "<<ans<<endl;
    cout<<"Time complexity: O(nlogn)"<<endl;
    cout<<"Space complexity: O(n)"<<endl;
    cout<<"     THANK YOU!"<<endl;


return 0;
}