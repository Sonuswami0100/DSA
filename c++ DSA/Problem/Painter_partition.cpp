#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool isvalid(vector<int> arr,int n,int m,int mid){   //allocation of books
    int painter = 1,time = 0;
    for(int i = 0;i < n;i++){
        if(time + arr[i] <= mid){     //Compare the max allowed pages
            time += arr[i];
        }else{
            painter++;
            time = arr[i];
        }
        
    }
    return  painter > m ? false:true;   //We use ternary operator
}
int painterPartition(vector<int> arr,int n,int m){
    if(m > n){      //this check the student value
        return -1;
    }
        int sum = 0,maxVal = INT_MIN;
        for(int i = 0;i < n;i++){     //sum of the all book
            sum += arr[i];
            maxVal = max(maxVal,arr[i]);
        }
        int ans = -1;
        int st = maxVal,end = sum;   //range of possible answer

        while (st <= end)
        {
            int mid = st + (end - st)/2;
            if(isvalid(arr,n,m,mid)){     //if the find the valid or not
                ans = mid;
                end = mid - 1;
            }else{      //invalid value
                st = mid + 1;
            }
        }
        return ans;
        
    }
int main(){
    vector<int> arr = {40,30,10,20};
    int m = 2;
    int n = arr.size();
    cout<<"answer = "<<painterPartition(arr,n,m)<<endl;
}