#include "iostream"
#include "vector"
using namespace std;
vector<vector<int>> dp;
bool helper(vector<int>& v, int idx, int target){
    if (idx >= v.size() || target < 0) return false;
    if (target == v[idx] || target == 0) return true;
    if (dp[idx][target] != -1) return dp[idx][target];
    if (target < v[idx]) return dp[idx][target] = helper(v, idx+1, target);
    return dp[idx][target] = helper(v, idx+1, target) || helper(v, idx+1, target-v[idx]);
}
bool canPartition(vector<int>& v) {
    if (v.size() == 2){
        if (v[0] == v[1]) return true;
        return false;
    }
    int sum = 0;
    for (auto x : v) sum += x;
    if (sum%2 == 1) return false;
    dp.resize(v.size(), vector<int>(sum/2 +2,-1));
    return helper(v, 0, sum/2);
}
int main(){
    int n;
    cout<<"\n\nEnter The Number Of Elements In The Vector : \n";
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnter The Values Of The Elements : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    if (canPartition(v)) cout<<"\n\nYes, The Given Vector Can Be Partitioned In Two Parts With Equal Sum";
    else cout<<"\n\nNo, The Given Vector Can Not Be Partitioned In Two Parts With Equal Sum";;
    cout<<"\n\n";
    system("pause");
}