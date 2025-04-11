#include<iostream>
#include<algorithm>      //this header file use to sort function
#include<vector>
using namespace std;
int majorityEl(vector<int> nums){      //this the brute force , the time complexity is (n2)
    int n = nums.size();
    for(int val : nums){          //we use nested loops in this problem
        int freq = 0;
        for(int el : nums){
            if(el == val){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
    }
    return -1;
}
int MajorityEl2(vector<int> nums){  //this optimize soluion this soluion is fast for nested loops
    //we jus sort the array
    sort(nums.begin(),nums.end());
    int freq = 1,ans = nums[0];
    int n = nums.size();
    for(int i = 1;i < n;i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
    }
    return -1;
}
int majorityEl3(vector<int> nums){
    int freq = 0, ans = 0, n = nums.size();
    for(int i = 0;i < nums.size();i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    // we just add extra step for ,we any case majority element not find
    int cout = 0;
    for(int val : nums){
        if(val == ans){
            cout++;
        }
    }
    if(cout > n/2){
        return ans;
    }else{
        return -1;
    }
}
int main(){
    vector<int> nums = {1,2,2,1,1};
    cout<<majorityEl(nums)<<endl;
    cout<<"optimize solve = "<<MajorityEl2(nums)<<endl;
    cout<<"moare's voting = "<<majorityEl3(nums)<<endl;
    return 0;
}