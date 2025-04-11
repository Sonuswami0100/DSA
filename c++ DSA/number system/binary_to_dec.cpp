#include<bits/stdc++.h>
using namespace std;
int bindecmal( int bin){
    int ans = 0 , pow = 1;

    while(bin > 0){
        int rem = bin % 10;
        ans += rem * pow;

        bin /= 10;
        pow *= 2;
    }

    return ans;
}
int main() {
    int bin;
    cin>>bin;
    cout<<bindecmal(bin)<<endl;
    return 0;
}