#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i = 0;i < num;i++){
        for (int j = 0; j < num-i-1; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i!=0 ){
            for(int k = 0;k < 2*i-1;k++){
                cout<<" ";
        }
        cout<<"*";
        }
        cout<<endl;
        
    }

    //buttom

    for(int i = 0;i < num-1;i++){
        //space
        for (int j = 0; j < i+1; j++)
        {
            cout<<" ";
        }

        cout<<"*";

        if(i != num-2){
            //space
            for (int j = 0; j <2*(num-i)-5; j++)
        {
            cout<<" ";
        }

            cout<<"*";
        }
        cout<<endl;
    }    
}