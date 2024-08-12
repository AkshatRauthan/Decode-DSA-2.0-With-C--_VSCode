#include "iostream"
#include "vector"
using namespace std;

int minCostRecursive(vector<int>& v, int n, vector<int> &dp){
    if (n < 0) return 0;
    if (dp[n] != -1) return dp[n];
    return dp[n] = min(minCostRecursive(v,n-1,dp),minCostRecursive(v,n-2,dp))+v[n];
}

int minCostTabulation(vector<int> v) {
    if (v.size() == 2) return min(v[0],v[1]);
    for (int i = v.size()-3; i>=0; i--) v[i] = v[i] + min(v[i+1],v[i+2]);
    return min(v[0],v[1]);
}