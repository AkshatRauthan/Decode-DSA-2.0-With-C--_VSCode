#include "iostream"
#include "vector"
#include "unordered_set"
using namespace std;

unordered_set<int> s;

void helper(vector<vector<int>>& v, int idx){
    if (s.find(idx) != s.end()) return;
    s.insert(idx);
    for (auto x : v[idx]) helper(v, x);
}

bool canVisitAllRooms(vector<vector<int>>& v) {
    s.clear();
    helper(v, 0);
    for (int i=1; i<v.size(); i++) if (s.find(i) == s.end()) return false;
    return true;
}

int main(){
    
}