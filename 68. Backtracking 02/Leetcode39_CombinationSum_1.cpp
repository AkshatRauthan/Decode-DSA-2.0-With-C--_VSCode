#include "iostream"
#include "vector"
#include "unordered_map"
#include "unordered_set"
#include "algorithm"
using namespace std;

vector<vector<int>> ans;
unordered_map<int, int> m;

void helper(vector<int>& v, int idx, int currSum){
    if (currSum < 0) return;
    if (currSum == 0){
        vector<int> temp = {};
        for (auto p : m){
            for (int i=0; i<p.second; i++) temp.push_back(p.first);
        }
        ans.push_back(temp);
        return;
    }
    if (idx >= v.size()) return;
    unordered_set<int> s;
    s.clear();
    for (int i=idx; i<v.size(); i++){
        if (s.find(v[i]) != s.end()) continue;
        m[v[i]]++;
        s.insert(v[i]);
        helper(v, i, currSum - v[i]);   
        m[v[i]]--;                      
    }
}

vector<vector<int>> combinationSum(vector<int>& v, int sum) {
    sort(v.begin(), v.end());
    m.clear();
    helper(v, 0, sum);
    return ans;
}

int main(){
    int n;
    cout<<"\n\nEnter The Size Of The Vector : \n";
    cin>>n;
    vector<int> v = vector<int>(n);
    cout<<"\n\nEnter The Elements Of The Vector Without Repetition : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    cout<<"\n\nEnter The Sum You Want To Find In The Combinations Of The Given Vector : \n";
    cin>>n;
    combinationSum(v, n);
    cout<<"\n\nThere Are "<<ans.size()<<" Combinations Of The Vector Having Sum "<<n<<"\n\n";
    for (auto comb : ans){
        cout<<"[ ";
        for (auto ele : comb) cout<<ele<<" ";
        cout<<"]\n";
    }
    cout<<"\n\n";
    system("pause");
}