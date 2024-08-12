#include "iostream"
#include "vector"
#include "climits"
using namespace std;
vector<vector<int>> dp;

int helper(vector<int>& v, int target, int idx){
    if(target == 0) return 0;
    if(idx >= v.size()) return INT_MIN/100;
    if(dp[idx][target] != -1) return dp[idx][target];
    if(target >= v[idx])
        return dp[idx][target] = max(1 + helper(v, target-v[idx], idx+1), helper(v, target, idx+1));
    return dp[idx][target] = helper(v, target, idx+1);
}
int lengthOfLongestSubsequence(vector<int>& v, int target) {
    dp.resize(v.size()+1, vector<int>(target+1,-1));
    int a = helper(v, target, 0);
    if (a > 0) return a;
    return -1;
}

int main(){
    int n;
    cout<<"\n\nEnter The Number Of Elements Present In The Vector : \n";
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int target;
    cout<<"\n\nEnter The Value Of The Target Sum : \n";
    cin>>target;
    n = lengthOfLongestSubsequence(v, target);
    cout<<"\n\nThe Length Of The Longedt Sub-Sequence That Sums Upto Target Is : "<<n;
    cout<<"\n\n";
    system("pause");
}