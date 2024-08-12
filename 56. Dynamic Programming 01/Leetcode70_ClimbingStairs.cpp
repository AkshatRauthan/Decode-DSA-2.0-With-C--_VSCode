#include "iostream"
#include "vector"
using namespace std;

int climbStairs(int n) {
    if (n == 1 || n == 2 || n == 3) return n;
    vector<int> dp(n,1);
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 3;
    for (int i=3; i<n; i++) dp[i] = dp[i-1] + dp[i-2];
    return dp[n-1];
}

int main(){
    int n;
    cout<<"\n\nEnter The Number Of Stairs Present In The Staircase : \n";
    cin>>n;
    cout<<"\n\nThe Total NUmber Of Ways To Climb The Staircase Are : "<<climbStairs(n);
    cout<<"\n\n";
    system("pause");
}