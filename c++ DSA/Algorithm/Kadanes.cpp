//add vector in this question

#include<iostream>
#include<algorithm>     //use to max and min funtion
using namespace std;
int maxsumVal(int arr[],int size){           //brute force
    int maxsum = 0;
    for(int i = 0;i < size;i++){
        int currsum = 0;
        for(int j = i; j < size;j++){
            currsum += arr[j];
            maxsum = max(currsum,maxsum);
        }
    }
    return maxsum;
}
int maxsum(int arr[],int size){         //using kandane's Algorithm
    int maxsum = 0 , currsum = 0;
    for(int i = 0;i < size;i++){
        currsum += arr[i];
        maxsum = max(currsum,maxsum);   //the max function well be return max value
        if(currsum < 0){ //if the curr sum like -1 than it well be change to "0"
            currsum = 0;
        }
    }
    return maxsum;
}
int main(){
    int arr[] = {3,-4,5,-1,7,-8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Kadane's Algoithm = "<<maxsum(arr,size)<<endl;
    cout<<maxsumVal(arr,size);
}