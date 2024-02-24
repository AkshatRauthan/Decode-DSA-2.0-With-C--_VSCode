#include "iostream"
#include "vector"
using namespace std;

vector<int> dp;

int rob(vector<int>& v){
    if (v.size() == 1) return v[0];
    else if (v.size() == 2) return max(v[0],v[1]);
    else if (v.size() == 3) return max(v[0],max(v[1],v[2]));
    dp.resize(v.size(),-1);
    dp[0] = v[0];
    dp[1] = max(v[0],v[1]);
    for (int i=2; i<dp.size()-1; i++) dp[i] = max(v[i]+dp[i-2],0+dp[i-1]);
    int a = dp[dp.size()-2];
    dp[1] = v[1];
    dp[2] = max(v[1],v[2]);
    for (int i=3; i<dp.size(); i++) dp[i] = max(v[i]+dp[i-2],0+dp[i-1]);
    return max(a,dp[dp.size()-1]);
}

int main(){
    cout<<"\nEnter The Number Of Houses Present : \n";
    int n;
    cin>>n;
    cout<<"\nEnter The Capital Present In Each House : \n";
    vector<int> v(n,0);
    for (int i=0; i<n; i++) cin>>v[i];
    cout<<"\n\nThe Maximum Capital That Can Be Looted Is : "<<rob(v);
    cout<<"\n\n";
    system("pause");
}