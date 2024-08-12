#include "iostream"
#include "vector"
using namespace std;
vector<int> dp;

// Wrong Answer

int helper(vector<int> &v, int idx) {
    if (idx >= v.size()) return 0;
    if (idx == v.size() - 1 || idx == v.size() - 2) return v[idx];
    if (dp[idx] != -1) return dp[idx];
    return dp[idx] = v[idx] + max(helper(v, idx + 3), helper(v, idx + 2));
}

int robRecursive(vector<int> &v) {
    dp.resize(v.size(), -1);
    return max(helper(v, 0), helper(v, 1));
}

int rob(vector<int>& v) {
    if (v.size() == 1) return v[0];
    v[1] = max(v[1],v[0]);
    for (int i=2; i<v.size(); i++) v[i] = max(v[i-2]+v[i],v[i-1]);
    return v[v.size()-1];
}

int main(){
    int n;
    cout<<"\nEnter The Size Of The Vector : \n";
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnter The Elements Of The Vector : ";
    for (int i=0; i<n; i++) cin>>v[i];
    cout<<"\n\nThe Maximum Capital That Can Be Looted Is : "<<rob(v);
    cout<<"\n\n";
    system("pause");
}