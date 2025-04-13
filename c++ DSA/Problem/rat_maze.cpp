#include<iostream>
#include<vector>
using namespace std;
// Function to check if the current position is valid
void helper(vector<vector<int>>& mat,int r,int c,string path,vector<string>& ans,vector<vector<bool>>& vis){
    int n = mat.size();
    if(r < 0 || c < 0|| r >= n || c >= n || mat[r][c] == 0 || vis[r][c] == true){
        return;
    }
    if(r == n-1 && c == n-1){
        ans.push_back(path);
        return;
    }
    vis[r][c] = true;
    // Move Down
    helper(mat, r+1, c, path + 'D', ans, vis);
    // Move Left
    helper(mat, r, c-1, path + 'L', ans, vis);
    // Move Right
    helper(mat, r, c+1, path + 'R', ans, vis);
    // Move Up
    helper(mat, r-1, c, path + 'U', ans, vis);
    // Backtrack
    vis[r][c] = false;
}
vector<string> findPath(vector<vector<int>>& mat){
    int n = mat.size();

    vector<string> ans;
    string path = "";
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    helper(mat, 0, 0, path, ans, vis);
    return ans;
}

int main(){
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    vector<string> ans = findPath(mat);
    for(auto i : ans){
        cout << i << " ";
        cout << endl;
    }

return 0;
}