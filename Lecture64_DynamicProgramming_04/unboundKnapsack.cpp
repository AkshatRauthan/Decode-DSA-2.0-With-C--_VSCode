#include "iostream"
#include "vector"
using namespace std;
vector<vector<int>> dp;

int helper(vector<int>& w, vector<int>& v, int c, int idx, int ans){
    if (c == 0) return dp[idx][c] = ans;
    if (idx < 0 || c < 0) return 0;
    if (dp[idx][c] != -1) return dp[idx][c];
    if (w[idx] <= c) return dp[idx][c] = max(helper(w, v, c-w[idx], idx, ans+v[idx]), helper(w, v, c, idx-1, ans));
    return dp[idx][c] = helper(w, v, c, idx-1, ans);
}

int unboundKnapsack(vector<int>& w, vector<int>& v, int c){
    dp.resize(v.size(), vector<int>(c+1, -1));
    return helper(w, v, c, w.size()-1, 0);
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Items Present In The House : \n";
    cin>>n;
    vector<int> w(n), v(n);
    cout<<"\n\nEnter The Weight Of All The Items : \n";
    for (int i=0; i<n; i++) cin>>w[i];
    cout<<"\n\nEnter The Value Of All The Items : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int c;
    cout<<"\n\nEnter The Capacity Of The Knapsack : ";
    cin>>c;
    int ans = unboundKnapsack(w, v, c);
    cout<<"\n\nThe Maximum Amount That Can Be Looted From The House Is : "<<ans;
    cout<<"\n\n";
    system("pause");
}