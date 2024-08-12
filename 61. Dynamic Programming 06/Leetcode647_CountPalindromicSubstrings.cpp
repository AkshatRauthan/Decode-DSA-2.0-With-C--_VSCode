#include "iostream"
#include "vector"
using namespace std;

int countSubstrings(string s) {
    int n = s.length();
    vector<vector<int>> dp(n+1, vector<int>(n+1, 1));
    int ans = n;
    for (int k=1; k<n; k++){
        for (int i=0, j=k; i<=n-1-k, j<=n-1; i++, j++){
            if (s[i] != s[j]) dp[i][j] = 0;
            else {
                if (j == i+1 ){
                    dp[i][j] = 1;
                    ans++;
                }
                else if (dp[i+1][j-1] == 1){
                    dp[i][j] = 1;
                    ans++;
                }
                else dp[i][j] = 0;
            }
        }
    }
    return ans;
}

int main(){
    string str;
    cout<<"\n\nEnter The String : \n";
    cin>>str;
    int n;
    n = countSubstrings(str);
    cout<<"\n\nThe Total Number Of Palindromic Substrings Present In The Given String Is : \n"<<n;
    cout<<"\n\n";
    system("pause");
}