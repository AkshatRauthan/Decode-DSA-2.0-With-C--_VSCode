#include "iostream"
#include "vector"
#include "limits"
using namespace std;
vector<vector<int>> dp;

int helper(int amount, int idx, vector<int>& v ){
    if (amount == 0 ) return 1;
    if (amount < 0 || idx >= v.size()) return 0;
    if (dp[idx][amount] != -1) return dp[idx][amount];
    int a = 0;
    for (int i=idx; i<v.size(); i++) a += helper(amount-v[i], i, v);
    return dp[idx][amount] = a;
}

int change(vector<int>& v,int amount) {
    dp.resize(v.size(), vector<int>(amount+1, -1));
    return helper(amount, 0, v);
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
    n = change(v, amount);
    cout<<"\n\nThe Maximum Number Of Ways To Accquire The Required Sum Are : "<<n;
    cout<<"\n\n";
    system("pause");
}