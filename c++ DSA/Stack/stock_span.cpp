#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> price = {100,80,60,70,60,75,85};
    vector<int> ans (price.size(),0); //use the store stock span that called answer
    stack<int>s;    //search loest price for current day

    for(int i = 0;i < price.size();i++){    //itrrat the vector of price
        while(s.size() > 0 && price[s.top()] <= price[i]){   //find the loest and pop it in the stack
            s.pop();
        }
        if(s.empty()){  //if any case stack was empty than we simplly store i + 1 his answer
            ans[i] = i+1;
        }else{    //calculet the answer
            ans[i] = i - s.top();
        }
        s.push(i);
    }

    //print the ans vector
    for(int val : ans){
        cout<<val<<" ";
    }

return 0;
}