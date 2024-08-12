#include "iostream"
#include "vector"
using namespace std;

vector<vector<bool>> visited;
bool helper(vector<vector<int>>& v, int i, int j, int color, int initial) {
    if (i < 0 || j < 0 || i >= v.size() || j >= v[0].size() || visited[i][j]) return false;
    if (v[i][j] != initial) return true;
    if (i == 0 || j == 0 || i == v.size()-1 || j == v[0].size()-1) v[i][j] = color;
    visited[i][j] = true;
    bool a = helper(v, i+1, j, color, initial);
    bool b =  helper(v, i-1, j, color, initial);
    bool c = helper(v, i, j+1, color, initial);
    bool d =  helper(v, i, j-1, color, initial);
    if (a || b || c|| d) v[i][j] = color;
    return false;
}
vector<vector<int>> colorBorder(vector<vector<int>>& v, int i, int j, int clr) {
    visited.resize(v.size(), vector<bool>(v[0].size(), false));
    helper(v, i,  j, clr, v[i][j]);
    return v;
}