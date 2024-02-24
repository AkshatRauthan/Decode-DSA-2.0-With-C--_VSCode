#include "iostream"
#include "vector"
#include "string"
#include "algorithm"
using namespace std;
vector<vector<int>> dp;
int helper(string& s1, string& s2, int idx1, int idx2){
    if (idx1 < 0 || idx2 < 0) return 0;
    if (dp[idx1][idx2] != -1) return dp[idx1][idx2];
    if (s1[idx1] == s2[idx2]) return dp[idx1][idx2] = 1+helper(s1, s2, idx1-1, idx2-1);
    return dp[idx1][idx2] = max(helper(s1, s2, idx1-1, idx2), helper(s1, s2, idx1, idx2-1));
}
int minDistance(string& s1, string& s2) {
    dp.resize(s1.length(), vector<int>(s2.length(),-1));
    return s1.length() + s2.length() - 2 * helper(s1, s2, s1.length()-1,s2.length()-1);
}

int main(){
    cout<<"\n\nEnter The First String : \n";
    string s1;
    cin>>s1;
    cout<<"\n\nEnter The Second String : \n";
    string s2;
    cin>>s2;
    cout<<"\n\nThe Minimum Number Of Delete Operations ToMake Boyh Strings Same : ";
    cout<<minDistance(s1, s2);
    cout<<"\n\n";
    system("pause");
}