#include "iostream"
#include "vector"
using namespace std;
vector<vector<int>> dp;

int helper(string& s1, string& s2, int i, int j){
    if (i < 0) return j+1;
    if (j < 0) return i+1;
    if (s1[i] == s2[j]) return dp[i][j] = helper(s1, s2, i-1, j-1);
    if (dp[i][j] != -1) return dp[i][j];
    else {
        int add = helper(s1, s2, i, j-1);
        int remove = helper(s1, s2, i-1, j);
        int replace = helper(s1, s2, i-1, j-1);
        return dp[i][j] =  1 + min(add, min(remove, replace));
    }
}
int minDistance(string s1, string s2) {
    dp.resize(s1.length(), vector<int>(s2.length(), -1));
    return helper(s1, s2, s1.length()-1, s2.length()-1);
}

int main(){
    string s1, s2;
    cout<<"\n\nEnter The First String : \n";
    cin>>s1;
    cout<<"\n\nEnter The Second String : \n";
    cin>>s2;
    int n = minDistance(s1, s2);
    cout<<"\n\nThe Minimum Number Of Operations Required To Make The Given Two Strings Same Are : "<<n;
    cout<<"\n\n";
    system("pause");
}