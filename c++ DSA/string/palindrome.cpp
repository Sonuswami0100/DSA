#include<iostream>
using namespace std;
bool is_alphanum(char ch){
    if((ch >= '0' && ch <= '9') ||(tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
    return false;
}
bool isPalindrome(string s) {
        int n = s.length();
        int st = 0,end = n - 1;
        while( st < end){
            if(!is_alphanum(s[st])){
                st++;
                continue;
            }
            if(!is_alphanum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++;
            end--;
        }
        return true;
        
}
int main(){
    string str = "Madam";
    if(isPalindrome(str)){
        cout<<"Is palindrome"<<endl;
    }else{
        cout<<"Not palindrome";
    }
}