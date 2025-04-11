#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void next_permutation(vector <int>& arr,int n){
    int piv = -1;
    for(int i = n-2;i >= 0;i--){    //we find the pivt(i < i+1)
        if(arr[i] < arr[i+1]){
            piv = i;
            break;
        }
    }
    if(piv == -1){         //if not find pivt
        reverse(arr.begin(),arr.end());
        return ;
    }
    //2
    for(int i = n-1;i > piv;i--){
        if(arr[i] > arr[piv]){
            swap(arr[i],arr[piv]);
                break;
        }
    }
    //3
    int i = piv+1,j = n - 1;
    while(i <= j){
        swap(arr[i],arr[j]);
            i++;
            j--;
    }

}
int main(){
    vector<int> arr = {3,2,1};
    int n = sizeof(arr)/sizeof(0);
    next_permutation(arr,n);
    for(int val : arr){
        cout<<val<<" ";
    }
}