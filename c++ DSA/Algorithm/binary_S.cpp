#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> nums,int tar){ //that is the function to binary search
    int st = 0,end = nums.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st)/2;       //calculate the mid or array
        if(tar > nums[mid]){
            st = mid + 1;       //than the target is largest of mid we search the 2nd half
        }else if(tar < nums[mid]){
            end = mid - 1;      //than the target is lowest of mid we search the 1nd half
        }else{
            return mid;     //mid Is equal to target we smpily return the mid;
        }
    }
    return -1;
    
}
int main(){
    vector<int> arr = {-1,0,1,2,3,4,5};
    int target = -1;
    cout<<"this is index = "<<binarysearch(arr,target)<<endl;
    return 0;

}