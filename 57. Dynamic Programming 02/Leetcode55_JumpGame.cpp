#include "iostream"
#include "vector"
using namespace std;
vector<int> dp;

bool helper(vector<int>& v, int idx){
    if (idx >= v.size()-1 || v[idx] >= v.size()-1-idx) return true;
    if (v[idx] == 0) return false;
    if (dp[idx] != -1) return dp[idx];
    bool flag = false;
    for (int i=1; i<=v[idx]; i++){
        flag = flag || helper(v,idx+i);
        if (flag) return dp[idx] = true;
    }
    return dp[idx] = flag;
}
bool canJump(vector<int>& v){
    if (v.size() == 1) return true;
    dp.resize(v.size(), -1);
    return helper(v, 0);
}
bool canJumpTabulation(vector<int>& v){
    if (v.size() == 1) return true;
    vector<int> dp(v.size(), -1);
    dp[v.size()-1] = 1;
    for (int i=v.size()-2; i>=0; i--){
        if (v[i] == 0) dp[i] = 0;
        else{
            bool flag = false;
            for (int j=1; j<=v[i]; j++){
                if (i+j < v.size() && dp[i+j] == 1){
                    flag = true;
                    break;
                }
            }
            dp[i] = flag;
        }
    }
    return dp[0];
}
int main(){
    cout<<"\n\nEnter The Size Of The Vector : \n";
    int n;
    cin>>n;
    cout<<"\n\nEnter The Elements Of The Vector : \n";
    vector<int> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    if (canJumpTabulation(v)) cout<<":\n\nYes, We Can Reach The Last Element Of THe Vector.\n";
    else cout<<":\n\nNo, We Can Not Reach The Last Element Of THe Vector.\n";
    cout<<"\n\n";
    system("pause");
}