// Merge two sorted arrays
// Time complexity: O(n+m)
// Space complexity: O(n+m)
// Merge two sorted arrays
#include<iostream>
#include<vector>
using namespace std;

vector<int> merge_sort(vector<int>& arr,vector<int>& arr1,int n,int m){
    vector<int> ans(m+n);
    int idx = m+n - 1,i = m - 1,j = n - 1;
    while(i >= 0 && j >= 0){
        if(arr[i] >= arr1[j]){
            ans[idx]  = arr[i];
            idx--;
            i--;
        }else{
            ans[idx] = arr1[j];
            idx--;
            j--;
        }
    }
    //anthor loop
    while(j >= 0){
        ans[idx] = arr1[j];
        idx--;
        j--;
    }
    while (i >= 0) {
        ans[idx] = arr[i];
        idx--;
        i--;
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,3};
    vector<int> arr1 = {2,5,6};
    int m = arr.size();
    int n = arr1.size();
    vector<int> nums = merge_sort(arr,arr1,n,m);
    for(int val : nums){
        cout<<val<<" ";
    }
}