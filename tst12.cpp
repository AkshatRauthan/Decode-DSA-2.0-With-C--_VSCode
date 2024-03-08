#include "iostream"
#include "vector"
using namespace std;
vector<int> subArraySum(vector<int>v, int n, long long sum){
    int i=0, j=0;
    long long currSum = 0;
    
    // Case I : When The Subarray Starts From 0.
    while (currSum <= sum){
        if (currSum == sum) return {i+1,j+1};
        else currSum += v[j++];
    }
    
    // Case II : When The Subarray Do Not Starts From 0.
    while (j <= n-1){
        while (currSum > sum) currSum -= (long long)v[i++];
        if (currSum == sum) return {i+1,j};
        while (currSum < sum) currSum += (long long)v[++j];
    }
    
    // Case III : When The Subarray Ends On The Last Index.
    while (i <= n-1){
        if (currSum == sum) return {i+1,j};
        while (currSum > sum) currSum -= (long long)v[i++];
        if (currSum == sum) return {i+1,j};
    }
    return {};
}
int main(){
    int n;
    cout<<"\n\nEnter The Number Of The Elements Present In The Vector : \n";
    cin>>n;
    vector<int> v(n, 0);
    cout<<"\n\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    long long sum = 0;
    cout<<"\n\nEnter The Target Sum : \n";
    cin>>sum;
    vector<int> ans = subArraySum(v, v.size()-1, sum);
    cout<<"\n\nThe Required Subarray Is As Follows : \n";
    for (int x : ans) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
}