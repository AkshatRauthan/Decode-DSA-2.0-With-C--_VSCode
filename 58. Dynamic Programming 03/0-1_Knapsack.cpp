#include "iostream"
#include "vector"
using namespace std;
vector<vector<int>> dp;

int knapSack(vector<int> &w, vector<int> &v,int weight, int capacity, int idx){
    if (weight > capacity || idx >= v.size()) return 0;
    if (dp[idx][weight] != -1) return dp[idx][weight];
    return dp[idx][weight] = max(knapSack(w, v, weight, capacity, idx+1),knapSack(w, v, weight+w[idx], capacity, idx+1)+v[idx]);
}

int main(){
    int n;
    cout<<"\n\nEnter The Number Of Items Present In The House : \n";
    cin>>n;
    vector<int> w(n), v(n);
    cout<<"\n\nEnter The Weight Of The Items : \n";
    for (int i=0; i<n; i++) cin>>w[i];
    cout<<"\n\nEnter The Value Of The Items : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    cout<<"\n\nEnter The Capacity Of The Bag : \n";
    int capacity;
    cin>>capacity;
    // In this case, the index along with the current weight of knapsack will vary.
    // Therefore, the dp vector will be a 2 D vector.
    // Now, index => 0 to v.size()-1, weight => 0 to max capacity of knapsack.
    dp.resize(n+1, vector<int>(capacity+1, -1));
    cout<<"\n\nThe Maximum Capital That Can Be Stolen Is : "<<knapSack(w, v, 0, capacity, 0);
    cout<<"\n\n";
    system("pause");
    return 0;
}