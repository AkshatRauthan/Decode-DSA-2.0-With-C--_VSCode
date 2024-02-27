#include "iostream"
#include "vector"
#include "string"
#include "algorithm"
using namespace std;
vector<vector<int>> dp;

int helper(string& s1, string& s2, int idx1, int idx2){
    if (idx1 < 0 || idx2 < 0) return 0;
    if (dp[idx1][idx2] != -1) return dp[idx1][idx2];
    if (s1[idx1] == s2[idx2]) return dp[idx1][idx2] = 1+helper(s1, s2, idx1-1, idx2-1);
    return dp[idx1][idx2] = max(helper(s1, s2, idx1-1, idx2), helper(s1, s2, idx1, idx2-1));
}

int lps(string s){
    string s2 = s;
    dp.resize(s.length(), vector<int>(s.length(),-1));
    reverse(s2.begin(), s2.end());
    return helper(s, s2, s.length()-1, s.length()-1);
}

int main(){
    string s;
    cout<<"\n\nEnter The String : \n";
    cin>>s;
    cout<<"\n\nThe Length Of The Longest Palindromic Sub-Sequence Of The String Is "<<lps(s);
    cout<<"\n\n";
    system("pause");
}