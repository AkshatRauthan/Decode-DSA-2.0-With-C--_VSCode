#include "iostream"
#include "vector"
using namespace std;

void possibleArrays(int i, int j, vector<int>& v1, vector<int>& v2, vector<int> ans, vector<vector<int>>& v){
    if (i == v1.size() || j == v2.size()){
        v.push_back(ans);
        return;
    }
    ans.push_back(v1[i]);
    ans.push_back(v2[j]);
    
    possibleArrays(i+1, j+1, v1, v2, ans, v);

}

int main(){
    vector<int> a = {10, 15, 25};
    vector<int> b = {1, 5, 20, 30};
    vector<vector<int>> ans;

}