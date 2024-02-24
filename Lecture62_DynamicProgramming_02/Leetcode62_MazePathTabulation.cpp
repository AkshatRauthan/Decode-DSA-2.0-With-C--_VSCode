#include "iostream"
#include "vector"
using namespace std;

int uniquePaths(int m, int n){
    if (n == 1 || m == 1) return 1;
    vector<vector<int>> dp(m, vector<int>(n,1));
    for (int i=1; i<m; i++){
        for (int j=1; j<n; j++) dp[i][j] = dp[i-1][j] + dp[i][j-1];
    }
    return dp[m-1][n-1];
}

int main(){
    int m,n;
    cout<<"\n\nEnter The Number Of Rows In The Maze : \n";
    cin>>m;
    cout<<"\n\nEnter The Number Of Columns In The Maze : \n";
    cin>>n;
    cout<<"\n\nThe Total Number Of Paths To Cross A Maze Of Size "<<n<<" X "<<m<<" Is : "<<uniquePaths(m,n);
    cout<<"\n\n";
    system("pause");
}