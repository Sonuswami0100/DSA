#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
bool isvalid(vector<int> arr,int n,int c,int mid){   //allocation of books
    int cows = 1,stall = arr[0];
    for(int i = 0;i < n;i++){
        if(arr[i] - stall >= mid){  //Compare the max allowed pages
            cows++;
            stall = arr[i];
        }
        if(cows == c ){
            return true;
        }
    }
    return false;
}
int AggressiveCows(vector<int> arr,int n,int m){
    sort(arr.begin(),arr.end());
        int ans = -1;
        int st = 1,end = arr[n-1] - arr[0];   //range of possible answer

        while (st <= end)
        {
            int mid = st + (end - st)/2;
            if(isvalid(arr,n,m,mid)){     //if the find the valid or not
                ans = mid;
                st = mid + 1;
            }else{      //invalid value
                end = mid - 1;
            }
        }
        return ans;
        
    }
int main(){
    vector<int> arr = {1,2,8,4,9};
    int c = 3;
    int n = arr.size();
    cout<<"answer = "<<AggressiveCows(arr,n,c)<<endl;
}