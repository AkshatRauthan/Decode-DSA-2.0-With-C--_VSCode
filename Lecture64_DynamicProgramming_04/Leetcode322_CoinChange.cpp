#include "iostream"
#include "vector"
#include "climits"
using namespace std;
vector<vector<int>> dp;

int helper(vector<int>& v, int amount, int idx){
    if (amount == 0) return 0;
    if (idx == v.size()) return INT_MAX-1;
    if (dp[idx][amount] != -1) return dp[idx][amount];
    if (amount < v[idx]) return dp[idx][amount] = helper(v, amount, idx+1);
    return dp[idx][amount] = min(helper(v, amount, idx+1),1 + helper(v, amount-v[idx], idx));
}
// 186,419,83,408
int coinChangeRecursive(vector<int>& v, int amount) {
    if (amount == 0) return 0;
    dp.resize(v.size(),vector<int>(amount+1,-1));
    int ans = helper(v, amount, 0);
    if (ans == -1) return -1;
    else return ans;
}

int main(){
    int n;
    cout<<"\n\nEnter The Total Number Of Coins : \n";
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnter The Values Of The Coins : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int amount;
    cout<<"\n\nEnter The Final Amount That You Want To Get From The Coins : \n";
    cin>>amount;
    n = coinChangeRecursive(v, amount);
    cout<<"\n\nThe Minimum Number Of Coins Required Are : "<<n;
    cout<<"\n\n";
    system("pause");
}