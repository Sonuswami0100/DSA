#include<iostream>
#include<vector>
using namespace std;
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(),n = matrix[0].size();
        int srow = 0,scol = 0;
        int erow = m-1,ecol = n-1;
        vector<int> ans;

        while(srow <= erow && scol <= ecol){
            //top
            for(int i = scol;i <= ecol;i++){
                ans.push_back(matrix[srow][i]);
            }
            //right
            for(int i = srow+1;i <= erow;i++){
                ans.push_back(matrix[i][ecol]);
            }
            //bottom
            for(int j = ecol-1;j >= scol;j--){
                if(srow == erow){
                    break;
                }
                ans.push_back(matrix[erow][j]);
            }
            //left
            for(int j = erow-1; j >= srow+1;j--){
                if(scol == ecol){
                    break;
                }
                ans.push_back(matrix[j][scol]);
            }
            srow++;scol++;
            erow--;ecol--;
        }
        return ans;
        
    }
int main(){
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    cout<<"Given matrix :- "<<endl;
    for(int i = 0;i < matrix.size();i++){
        for(int j = 0;j < matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int> result = spiralOrder(matrix);
    cout<<"spiral order for given matrix = ";
    for(int val : result){
        cout<<val<<" ";
    }
}