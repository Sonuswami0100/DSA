#include<bits/stdc++.h>
using namespace std;
bool check_prime(int n){
    if(n <= 1) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
} 
int main(){
    int n;
    cin>>n;
    if(check_prime(n)){
        cout<<n<<" is prime number";
    }else{
        cout<<n<<" is not prime number";       
    }
    return 0;
}