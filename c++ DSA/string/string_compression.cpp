#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int compress(vector<char>& chars) {
        int idx = 0;
        int n = chars.size();
        for( int i = 0;i < n;i++){
            char ch = chars[i];
            int count = 0;

            while(i < n && chars[i] == ch){
                count++;i++;
            }
            if(count == 1){
                chars[idx++] = ch;
            }else{
                chars[idx++] = ch;
                string str = to_string(count);
                for(int dig : str){
                    chars[idx++] = dig;
                }
            }
            i--;
        }
        chars.resize(idx);
        return idx;
        
    }
int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};
    cout<<compress(chars)<<endl;
    cout<<"cmpression string = ";
    for(int val : chars){
        cout<<(char)(val)<<" ";
    }
}