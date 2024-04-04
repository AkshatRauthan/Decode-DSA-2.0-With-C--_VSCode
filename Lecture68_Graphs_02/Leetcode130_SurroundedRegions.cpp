#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
    vector<vector<bool>> visited;
    void dfs(vector<vector<char>> &v, int i, int j){
        if (i < 0 || j < 0 || i > v.size()-1 || j > v[0].size()-1) return;
        visited[i][j] = true;
        if (i > 0 && v[i-1][j] == 'O' && !visited[i-1][j]) dfs(v, i-1, j);
        if (i < v.size()-1 && v[i+1][j] == 'O' && !visited[i+1][j]) dfs(v, i+1, j);
        if (j > 0 && v[i][j-1] == 'O' && !visited[i][j-1]) dfs(v, i, j-1);
        if (j < v[0].size()-1 && v[i][j+1] == 'O' && !visited[i][j+1]) dfs(v, i, j+1);
    }
    void solve(vector<vector<char>>& v) {
        if (v.size() == 2 && v[0].size() == 2) return;
        visited.resize(v.size(), vector<bool>(v[0].size(), false));
        for (int j = 0; j<v[0].size(); j++)
            if (v[0][j] == 'O' && !visited[0][j]) dfs(v, 0, j);
        for (int j = 0; j<v[0].size(); j++)
            if (v[v.size()-1][j] == 'O' && !visited[v.size()-1][j]) dfs(v, v.size()-1, j);
        for (int i = 0; i<v.size(); i++)
            if (v[i][0] == 'O' && !visited[i][0]) dfs(v, i, 0);
        for (int i = 0; i<v.size(); i++)
            if (v[i][v[0].size()-1] == 'O' && !visited[i][v[0].size()-1]) dfs(v, i, v[0].size()-1);
        for (int i=0; i<v.size(); i++){
            for (int j= 0; j<v[0].size(); j++){
                if (v[i][j] == 'O' && !visited[i][j]) v[i][j] = 'X';
            }
        }
        visited.clear();
    }
};