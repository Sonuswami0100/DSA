#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
    unordered_map<int,int> m ;
    for(int i = 0;i < n;i++){
        int first = nums[i];
        int sec = target - first;
        if(m.find(sec) != m.end()){
            return{i,m[sec]};
        }
        m[first] = i;
    }
        return {};
    }
int main(){
    vector<int> arr = {5,2,11,7,15};
    int target = 9;
    vector<int> ans = twoSum(arr,target);
    for(int val : ans){
        cout<<val<<" ";
    }
    return 0;
}