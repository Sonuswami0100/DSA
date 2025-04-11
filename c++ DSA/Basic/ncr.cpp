#include<bits/stdc++.h>
using namespace std;
int fact(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}
double ncr(int num , int r){
    int val = fact(num);
    int val2 = fact(r);
    int val3 = fact(num - r);
    return val / (val2 * val3);
}

int main(){ 
      int num;
      int r ;
      cin>>num>>r;
      cout<<ncr(num,r)<<endl;
      return 0;
}