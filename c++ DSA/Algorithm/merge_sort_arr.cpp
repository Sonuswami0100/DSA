                       //In this program same bug but Logic is currat
#include<iostream>
#include<vector>
using namespace std;

vector<int> merge_sort(vector<int>& arr,vector<int>& arr1,int n,int m){
    vector<int> ans;
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
    return ans;
}
int main(){
    vector<int> arr = {1,2,3};
    vector<int> arr1 = {2,5,6};
    int m = arr.size();
    int n = arr1.size();
    vector<int> nums = merge_sort(arr,arr1,m,n);
    for(int val : nums){
        cout<<val<<" ";
    }
}