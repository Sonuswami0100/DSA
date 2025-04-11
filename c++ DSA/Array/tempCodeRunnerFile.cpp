#include<iostream>
using namespace std;
void uniqueVal(int arr[] , int size){
    for(int i = 0;i < size;i++){
        bool isunique = true;
        for(int j = 0;j < size;j++){
            if(i != j && arr[i] == arr[j]){
                isunique = false;
                break;
            }