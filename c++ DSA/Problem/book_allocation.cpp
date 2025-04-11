#include<iostream>
#include<vector>
using namespace std;
bool isvalid(vector<int> arr,int n,int m,int mid){   //allocation of books
    int st = 1,pages = 0;
    for(int i = 0;i < n;i++){
        if(pages + arr[i] <= mid){     //Compare the max allowed pages
            pages += arr[i];
        }else{
            st++;
            pages = arr[i];
        }
        
    }
    return  st > m ? false:true;   //We use ternary operator
}
int bookAllocation(vector<int> arr,int n,int m){
    if(m > n){      //this check the student value
        return -1;
    }
        int sum = 0;
        for(int i = 0;i < n;i++){     //sum of the all book
            sum += arr[i];
        }
        int ans = -1;
        int st = 0,end = sum;   //range of possible answer

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
    vector<int> arr = {15,17,20};
    int m = 2;
    int n = arr.size();
    cout<<"answer = "<<bookAllocation(arr,n,m)<<endl;
}