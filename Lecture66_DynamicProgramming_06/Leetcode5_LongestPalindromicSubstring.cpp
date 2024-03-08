#include "iostream"
#include "string"
#include "vector"
using namespace std;

string longestPalindrome(string s) {
    pair<int,int> p = {0,0};
    int curLen = 0;
    int n = s.length();
    vector<vector<int>> dp(n+1, vector<int>(n+1, 1));
    int ans = n;
    for (int k=1; k<n; k++){
        for (int i=0, j=k; i<=n-1-k, j<=n-1; i++, j++){
            if (s[i] != s[j]) dp[i][j] = 0;
            else {
                if (j == i+1 || dp[i+1][j-1]) dp[i][j] = 1;
                else dp[i][j] = 0;
                if (dp[i][j] > curLen) p = {i,j};
            }
        }
    }
    return s.substr(p.first, p.second - p.first+1);
}

int main(){
    string str;
    cout<<"\n\nEnter The String : \n";
    cin>>str;
    str = longestPalindrome(str);
    cout<<"\n\nThe Longest Palindromic Substring Of The Given String Is : \n"<<str;
    cout<<"\n\n";
    system("pause");
}