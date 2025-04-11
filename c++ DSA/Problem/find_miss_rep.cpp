#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int n = grid.size();
        int a,b;
        int expsum = 0,actulsum = 0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                actulsum += grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    a = grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }
        expsum = (n*n) * (n*n+1)/2;
        b = expsum + a - actulsum;
        ans.push_back(b);
        return ans;

        
    }
int main(){
    vector<vector<int>> arr ={
        {9,1,7},
        {8,9,2},
        {3,4,6},
    };
    vector<int> result = findMissingAndRepeatedValues(arr);
    cout<<"the missing and repeating values: ";
    for(int val : result){
        cout<<val<<" ";
    }


}