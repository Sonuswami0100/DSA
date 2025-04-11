// solve stock buy and sell problem
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int buySell(vector<int>& nums){
    int maxP = 0,bestB = nums[0];
    for(int i = 1;i < nums.size();i++){
        if(nums[i] > bestB){
            maxP = max(maxP,nums[i] - bestB);  //calculet the profit
        }
        bestB = min(bestB,nums[i]);     //store the best but for preves day
    }
    return maxP;
}
int main(){
    vector<int> nums = {7,1,5,3,6,4};
    cout<<"your max profit is = "<<buySell(nums)<<endl;

}