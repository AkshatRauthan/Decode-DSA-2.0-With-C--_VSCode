#include "iostream"
#include "unordered_map"
#include "vector"
using namespace std;
unordered_map<int, vector<int>> dp;
int helper(vector<int>& v, int idx, int sum, int target){
    if (idx == v.size()){
        if (target == sum) return 1;
        return 0;
    }
    if (dp[sum][idx] != -1) return dp[sum][idx];
    return dp[sum][idx] = helper(v, idx+1, sum+v[idx], target) + helper(v, idx+1, sum-v[idx], target);
}
int findTargetSumWays(vector<int>& v, int target){
    int sum = 0;
    for (auto x : v) sum += x;
    for (int i=(sum* -1); i<=sum; i++){
        vector<int> temp(v.size(), -1);
        dp[i] = temp;
    }
    return helper(v, 0, 0, target);
}

int main(){
    int n;
    cout<<"\n\nEnter The Number Of Elements Present In The Vector : \n";
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnetr The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int target;
    cout<<"\n\nEnetr The Target Sum : \n";
    cin>>target;
    n = findTargetSumWays(v, target);    
    cout<<"\n\nThe Total Number Of Ways To Obtain The Target Sum By Adding Or Subtracting All Elements Once Is : "<<n;
    cout<<"\n\n";
    system("pause");
}