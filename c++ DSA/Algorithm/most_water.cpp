#include<iostream>
#include<vector>
#include<climits>      //use to the min and max function
using namespace std;
int mostwater(vector<int> nums){
    int maxW = 0;
    for(int i = 0;i < nums.size();i++){
        for(int j = i + 1;j < nums.size();j++){
            int weight = j - i;
            int ht = min(nums[i],nums[j]);
            int area = weight * ht;
            maxW = max(maxW,area);
        }
    }
    return maxW;
}
int twopointer(vector<int> nums){      //this the two pointer solion for low time
    int maxW = 0;
    int lp = 0,rp = nums.size()-1;
    while(lp < rp){
        int weight = rp - lp;          //calculet the weight of two side middle
        int ht = min(nums[lp],nums[rp]);
        int area = weight * ht;
        maxW = max(maxW,area);
        nums[lp] < nums[rp] ? lp++ : rp--;     //this condion to disaed the which side to be move
    }
    return maxW;
}
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<"there is most water contianer = "<<mostwater(height)<<endl;
    cout<<"two pointer solion = "<<twopointer(height)<<endl;
    return 0;

}