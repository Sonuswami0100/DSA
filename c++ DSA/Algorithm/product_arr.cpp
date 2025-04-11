#include<iostream>
#include<vector>
using namespace std;
vector<int> productarr(vector<int>nums){     //brute force Solution
    int n = nums.size();
    vector<int> ans(n,1);
    for(int i = 0;i < n;i++){
        int prod = 1;
        for(int j = 0;j < n;j++){
            if(i != j){            //Calculate the product of arr Except for own index
                prod *= nums[j];
            }
            ans[i] = prod;       //store the product in the ans arr
        }
    }
    return ans;
}
vector<int> productarr2(vector<int> nums){ //optimal solution
       //prefix = is the  value of left side the arr
       //sufix = is the value of right side
    int n = nums.size();
    vector<int> ans(n,1);
                      //calculate prefix
    for(int i = 1;i < n;i++){
        ans[i] = ans[i-1] * nums[i-1];    //calculate the prefix in the ans arr
    }
                      //claculate sufix
    int sufix = 1;
    for(int i = n - 2;i >= 0;i--){
        sufix *= nums[i+1];     //Basically multiply the sufix in to the nums last index
        ans[i] *= sufix;         //the sufix Multiply the sufix value
    }
    return ans;
}
int main(){
    vector<int>nums = {1,2,3,4};
    vector<int>result = productarr(nums);
    vector<int>result2 = productarr2(nums);
    cout<<"the result is = ";
    for(int val : result){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"the optimal ans = ";
    for(int val : result2){
        cout<<val<<" ";
    }
    return 0;
}