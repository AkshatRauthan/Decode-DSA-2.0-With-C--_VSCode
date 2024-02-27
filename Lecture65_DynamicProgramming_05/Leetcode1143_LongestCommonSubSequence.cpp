#include "iostream"
#include "vector"
#include "string"
using namespace std;
vector<vector<int>> dp;

int helper(string& s1, string& s2, int idx1, int idx2){
    if (idx1 < 0 || idx2 < 0) return 0;
    if (dp[idx1][idx2] != -1) return dp[idx1][idx2];
    if (s1[idx1] == s2[idx2]) return dp[idx1][idx2] = 1+helper(s1, s2, idx1-1, idx2-1);
    return dp[idx1][idx2] = max(helper(s1, s2, idx1-1, idx2), helper(s1, s2, idx1, idx2-1));
}

int lcs(string& s1, string &s2){
    dp.resize(s1.length(), vector<int>(s2.length(), -1));
    return helper(s1, s2, s1.length()-1, s2.length()-1);
}

int lcsTabulation(string& s1, string& s2){
    int m = s1.size(), n = s2.size();
    if (m < 0 || n < 0 ) return 0;
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
    for (int i=1; i<m; i++){
        for (int j=1; i<n; i++){
            if (s1[i-1] == s2[j-2]) dp[i][j] = 1 + dp[m-1][n-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
}

int main(){
    string s1, s2;
    cout<<"\n\nEnter The First String : \n";
    cin>>s1;
    cout<<"\n\nEnter The Second String : \n";
    cin>>s2;
    cout<<"\n\nThe Length Of The Longest Common Sub-Sequence Between The Give Two Strings Is : "<<lcs(s1,s2);
    cout<<"\n\n";
    system("pause");
}