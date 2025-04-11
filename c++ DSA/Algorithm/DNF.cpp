//in this qustion we use array becuse the is pass by value
#include<iostream>
#include<vector>
using namespace std;
void print_arr(int a[],int n){   //print the array
    for(int i = 0;i < n;i++){
        cout<<a[i]<<" ";
    }
}
void dnf(int a[] ,int n){
    int mid = 0,hig = n - 1,low = 0;    //create the three point
    while(mid <= hig){
        if(a[mid] == 0){       //the value is equal tow the 0
            swap(a[low],a[mid]);
            mid++;
            low++;
        }else if(a[mid] == 1){   //the value is equal 1
            mid++;
        }else{                 //the value is equal 2
            swap(a[hig],a[mid]);
            hig--;
        }
    }
}
int main(){
    int vec[] = {2,0,2,1,1,0,1,2,0,0};
    int n = sizeof(vec)/sizeof(0);
    dnf(vec,n);
    print_arr(vec,n);
}