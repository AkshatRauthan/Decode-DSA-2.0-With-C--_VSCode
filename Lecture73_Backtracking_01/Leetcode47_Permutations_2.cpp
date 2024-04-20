#include "iostream"
#include "vector"
#include "unordered_set"
using namespace std;

void helper(vector<int>& v, int idx, vector<vector<int>>& per){
    if (idx >= v.size()-1){
        per.push_back(v);
        return;
    }
    unordered_set<int> s;
    for (int i = idx; i<v.size(); i++){
        if (s.find(v[i]) != s.end()) continue;
        else s.insert(v[i]);
        swap(v[i], v[idx]);
        helper(v, idx+1, per);
        swap(v[i], v[idx]);    // Backtracking
    }
}
vector<vector<int>> permuteUnique(vector<int>& v) {
    vector<vector<int>> per;
    helper(v, 0, per);
    return per;
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements Present In The Vector : \n";
    cin>>n;
    vector<int> v = vector<int>(n, 0);
    cout<<"\n\nEnter The "<<n<<" Elements Of The Vector Having Repetetions : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    vector<vector<int>> permutations = permuteUnique(v);
    cout<<"\n\nThere Are "<<permutations.size()<<" Permutations Of The Given Vector.\n\n";
    for (auto permute : permutations){
        cout<<"[ ";
        for (auto x : permute){
            cout<<x<<" ";
        }
        cout<<"]\n";
    }
    cout<<"\n\n";
    system("pause");
}