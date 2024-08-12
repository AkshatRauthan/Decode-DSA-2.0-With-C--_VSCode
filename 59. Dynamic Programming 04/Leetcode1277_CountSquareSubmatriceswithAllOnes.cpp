#include "iostream"
#include "vector"
using namespace std;
vector<vector<int>> dp;

int countSquares(vector<vector<int>>& v) {
    int n = v.size(), m = v[0].size(), ans = 0;
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]){
                if(i==0 || j==0) dp[i][j] = 1;
                else dp[i][j] = 1+min(dp[i-1][j-1],min(dp[i][j-1], dp[i-1][j]));
            }
            ans += dp[i][j];
        }
    }
    return ans;
}

int main(){
    int n, m;
    cout<<"\n\nEnter The Number Of Rows In The Vector : \n";
    cin>>n;
    cout<<"\n\nEnter The Number Of Columns In The Vector : \n";
    cin>>m;
    vector<vector<int>> v(n+1, vector<int>(m+1, -1));
    cout<<"\n\nEnter The Elements Of The Matrix : \n";
    for (int i=0; i<n; i++, cout<<endl) for (int j=0; j<m; j++) cin>>v[i][j];
    n = countSquares(v);
    cout<<"\n\nThe Total Number Of Square Submatrices Filled With Ones Are : "<<n;
    cout<<"\n\n";
    system("pause");
}