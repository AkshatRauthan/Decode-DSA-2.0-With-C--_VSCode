#include "limits"
#include "iostream"
#include "vector"
using namespace std;
vector<int> dp;
int helper(vector<int>& v, int idx){
    if (idx < 0) return 0;
    if (dp[idx] != -1) return dp[idx];
    if (v[idx] >= v.size()-1-idx) return dp[idx] = 1;
    int mn = INT_MAX-100;
    for (int i=1; i<=v[idx]; i++) mn = min(mn, helper(v, idx+i));
    return dp[idx] = 1 + mn;
}
int jump(vector<int>& v) {
    if (v.size() == 1) return 0;
    dp.resize(v.size()+1,-1);
    return helper(v, 0);
}
int main(){
    int n;
    cout<<"\n\nEnter The Number Of Elements Present In The Vector : \n";
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnetr The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    cout<<"\n\nThe Minimum Number Of Steps Required To Jump Out Of The Array Is "<<jump(v);
    cout<<"\n\n";
    system("pause");
}
