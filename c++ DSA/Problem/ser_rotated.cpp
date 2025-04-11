#include<iostream>
#include<vector>
using namespace std;
int searchOp(vector<int> arr,int target){
    int n = arr.size();
    int st = 0,end = n-1;
    while (st <= end)
    {
        int mid = st + (end - st)/2;
        if(arr[mid] == target){       //check the target = mid than we simply return mid value
            return mid;
        }
        else if(arr[st] <= arr[mid]){     //check which one side is shorted 
            if(arr[st] <= target && arr[mid] <= target){      //check the target is right or lift side
                end = mid - 1;    //we search the left part
            }else{
                st = mid + 1;     //we search the right part
            }
        }else{
            if(arr[st] <= target && arr[mid]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }
    return -1;
    
}
int main(){
    vector<int> arr = {6,7,0,1,2,3,4,5};
    int target = 0;
    cout<<searchOp(arr,target)<<endl;     //function call
}