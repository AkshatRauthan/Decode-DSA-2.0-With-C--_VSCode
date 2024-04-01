#include "iostream"
#include "vector"
using namespace std;

vector<vector<bool>> visited;
void helper(vector<vector<char>> &v, int i, int j){
    if (i<0 || j<0 || i >= v.size() || j >= v[0].size()) return;
    if (visited[i][j] || v[i][j] == '0') return;
    visited[i][j] = true;
    helper(v, i-1, j), helper(v, i, j-1);
    helper(v, i+1, j), helper(v, i, j+1);
}
int numIslands(vector<vector<char>>& v) {
    visited.resize(v.size(), vector<bool>(v[0].size(), false));
    int ans = 0;
    for (int i=0; i<v.size(); i++) for (int j = 0; j<v[0].size(); j++){
            if (!visited[i][j] && v[i][j] == '1'){
                helper(v, i, j);
                ans++;
            }
        }
    return ans;
}