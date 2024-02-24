#include "iostream"
#include "vector"
#include "string"
#include "unordered_map"
#include "algorithm"
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& v) {
    unordered_map<string,vector<string>> m;
    for (int i = 0; i<v.size(); i++){
        string temp = v[i];
        sort(temp.begin(), temp.end());
        if (m.find(temp) != m.end()) (m[temp]).push_back(v[i]);
        else m[temp] = {v[i]};
    }
    vector<vector<string>> ans(m.size());
    int i=0;
    for (auto p : m){
        ans[i] = p.second;
        i++;
    }
    return ans;
}