#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i = 1; i <= num;i++){
        for(int j = 1;j <= i;j++){
            cout<<"*";
        }
        for(int j = 1;j <= 2*(num-i);j++){
            cout<<" ";
        }
        for(int j = 1;j <= i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = num; i > 0;i--){
        for(int j = 1;j <= i;j++){
            cout<<"*";
        }
        for(int j = 1;j <= 2*(num-i);j++){
            cout<<" ";
        }
        for(int j = 1;j <= i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}