#include<iostream>
#include<vector>
#include<utility>      //this is the new header file this well be return the pair value
using namespace std;
pair<int,int> singleEL(vector<int> arr ,int n){        //the type well be pair and describe value
    int st = 0, end = n-1;
    if(n == 1){
        return make_pair(arr[0],0);     //this well be return the pair
    }
    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid - 1] != arr[mid] && arr[mid + 1] != arr[mid]){ //the value of mid not be equle the left and right saide
            return make_pair(arr[mid],mid);
        }
        else if(mid % 2 == 0){     //even
            if(arr[mid - 1] == arr[mid]){   //check the value
                end = mid-1;
            }else{
                st = mid+1;
            }
        }else{      //odd
            if(arr[mid-1] == arr[mid]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
    return make_pair(-1,-1);
}

int main(){
    vector<int> arr = {3,3,7,7,10,11,11};
    int n = arr.size();
    pair<int,int> result = singleEL(arr,n);
    cout<<"This is index = "<<result.second<<endl;
    cout<<"This is the value = "<<result.first<<endl;
    return 0;
}