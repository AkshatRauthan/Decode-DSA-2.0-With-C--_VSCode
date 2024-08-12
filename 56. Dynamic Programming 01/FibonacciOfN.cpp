#include "iostream"
#include "vector"
using namespace std;
vector<int> dp;

int helper(int idx){
    if (idx <= 0) return 0;
    else if (dp[idx] != -1) return dp[idx];
    else return dp[idx] = helper(idx-1) + helper(idx-2);
}

int fiboRecursive(int n){
    if (n < 2) return n;
    dp.resize(n+1,-1);
    dp[1] = 0;
    dp[2] = 1;
    return helper(n);
}

int fiboTabulation(int n){
    if (n < 1) return -1;
    dp.resize(n);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i<n; i++) dp[i] = dp[i-1] + dp[i-2];
    return dp[n-1];
}

int main(){
    int n;
    cout<<"\n\nEnter The Number Of Terms Of Fibonacci You Want To Calculate : \n";
    cin>>n;
    cout<<"\n The "<<n<<"th Term Of Fibonacci Is : "<<fiboTabulation(n)<<endl;
    for (int ele : dp) cout<<ele<<"  ";
    cout<<"\n\n";
    system("pause");
}