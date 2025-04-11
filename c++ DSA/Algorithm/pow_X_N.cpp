#include<iostream>
using namespace std;
int main(){
    double x = 2.00000;
    int n = 10;
    int binfrom = n,ans = 1;
    if(n < 0){               //we just convert the (-) to (+)
        x = 1/x;
        binfrom = -binfrom;
    }
    while(binfrom > 0){
        if(binfrom % 2 == 1){        //this opration to parfrom the last diget
            ans *= x;     //simple to calculet 3^1
        }
        x *= x;         //update the x pow like x^2
        binfrom /= 2;             //update the binfrom
    }
    cout<<"this the pow = "<<ans<<endl;
    return 0;
}