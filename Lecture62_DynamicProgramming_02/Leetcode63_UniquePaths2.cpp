#include "iostream"
#include "vector"
using namespace std;
vector<vector<int>> dp;
int uniquePathsTabulation(vector<vector<int>>& v) {
    int n = v.size(), m = v[0].size();
    dp.resize(n, vector<int>(m,0));
    bool bn = !(v[0][0]), bm = !(v[0][0]);
    for (int i=0; i<m; i++){
        if (v[0][i] == 1){
            bn = false;
            if (n == 1) return 0;
        }
        else if (bn) dp[0][i] = 1;
        else dp[0][i] = 0;
    }
    for (int i=1; i<n; i++){
        for (int j = 0; j<m; j++){
            if (j == 0){
                if (bm && v[i][j]){
                    dp[i][j] = 0;
                    bm = false;
                }
                else if (bm && !v[i][0]) dp[i][j] = 1;
                else dp[i][j] = 0;
            }
            else if (v[i][j] == 0)dp[i][j] = dp[i-1][j] + dp[i][j-1];
            else dp[i][j] = 0;
        }
    }
    return dp[n-1][m-1];
}

int main(){
    int n, m;
    cout<<"\n\nEnter The Number Of Columns In The Vector : \n";
    cin>>n;
    cout<<"\n\nEnter The Number Of Rows In The Vector : \n";
    cin>>m;
    vector<vector<int>> v(n, vector<int>(m,0));
    v[n-1][m-1] = 0;
    cout<<"\n\nEnter The Values For Obstacles Present In The Grid : \n";
    for(int i=0; i<n; i++) for (int j=0; j<m; j++) cin>>v[i][j];
    cout<<"\n\nThe Number Of Unique Paths In The Given Grid Is : "<<uniquePathsTabulation(v)<<"\n\n";
    cout<<"\n\n";
    system("pause");
}
