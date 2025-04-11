#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pre_n = 0,sec_n = 1;
    cout<<pre_n<<" "<<sec_n<<" ";
    for(int i = 0;i < n-1;i++){
        int next_n = pre_n + sec_n;
        cout<<next_n<<" ";
        pre_n = sec_n;
        sec_n = next_n;
    }
    return 0;
}