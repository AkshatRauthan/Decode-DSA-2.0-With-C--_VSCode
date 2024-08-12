#include "iostream"
#include "vector"
using namespace std;

int helper(int m, int n, vector<vector<int>>& dp) {
    if (m < 0 || n < 0) return 0;
    if (m == 0 && n == 0) return 1;
    if (dp[m][n] != -1) return dp[m][n];
    if (m == 0) return dp[m][n] = helper(m,n-1,dp);
    if (n == 0) return dp[m][n] = helper(m-1,n,dp);
    return dp[m][n] = helper(m-1,n,dp) + helper(m,n-1,dp);
}

int uniquePathsRecursive(int m, int n) {
    vector<vector<int>> v(m,vector<int>(n,-1));
    return helper(m-1,n-1,v);
}

int uniquePaths(int m, int n){
    if (n == 1 || m == 1) return 1;
    vector<vector<int>> dp(n,vector<int>(m,-1));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (i == 0 || j == 0) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[n-1][m-1];
}

int main(){
    int m,n;
    cout<<"\n\nEnter The Height Of The Maze : \n";
    cin>>n;
    cout<<"\nEnter The Length Of The Maze : \n";
    cin>>m;
    cout<<"\nThe Total Number Of Unique Paths Are :  "<<uniquePaths(m,n);
    cout<<"\n\n";
    system("pause");
}