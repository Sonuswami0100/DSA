// In this this question i will use from the vector
#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums,int tar){ //Brute force soluion simple way to solve
    vector<int> ans;
    for(int i = 0;i < nums.size();i++){    //using nested loops in this question
        for(int j = i + 1;j < nums.size();j++){
            if(nums[i] + nums[j] == tar){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}
vector<int> pairsum2(vector<int> nums,int tar){ //This the optimized soluion use pair sum algo
    vector<int>ans;
    int n = nums.size();
    int i = 0,j = n,p;
    while (i < j)
    {
        p = nums[i] + nums[j];
        if(p > tar){               //that's the pair sum  > target i will decries the index of j
            j--;
        }
        else if(p < tar){
            j++;
        }
        else if(p == tar){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
    
}
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    int size = nums.size();
    vector<int> ans2 = pairsum2(nums,target);
    vector<int> ans = pairsum(nums,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
    cout<<"optimized = "<<ans2[0]<<" , "<<ans2[1]<<endl;
}