#include<iostream>
#include<string>
using namespace std;
   bool is_freqsame(int s1[],int s2[]){
    for(int i = 0;i < 26;i++){
        if(s1[i] != s2[i]){
            return false;
        }
    }
    return true;
   }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i = 0;i < s1.length();i++){
            freq[s1[i] - 'a']++;
        }

        int windsize = s1.length();
        for(int i = 0;i < s2.length();i++){
            int windid = 0,idx = i;
            int wifreq[26] = {0};

            while(windid < windsize && idx < s2.length()){
                wifreq[s2[idx] - 'a']++;
                windid++;
                idx++;
            }
            if(is_freqsame(freq,wifreq)){
                return true;
            }
        }
        return false;
    }
int main(){
    string str1 = "ab";
    string str2 = "eldbaooo";
    if(!checkInclusion(str2,str1)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}