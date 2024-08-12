#include "iostream"
#include "vector"
#include "unordered_map"
using namespace std;

int subarraySum(vector<int>& v, int k){
    vector<int> pre(v.size());
    pre[0] = v[0];               // Prefix Sum
    for (int i=1; i<v.size(); i++) pre[i] = v[i] + pre[i-1];
    unordered_map<int,int> m;
    int count = 0;
    for (int i=0; i<v.size(); i++){
        if (pre[i] == k) count++;
        if (m.find(pre[i]-k) != m.end()) count += m[pre[i]-k];
        m[pre[i]]++;
    }
    return count;
}

int main(){
    cout<<"\n\nEnter The Size Of The Vector : \n";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int k;
    cout<<"\n\nEnter The Target Sum That You Want To Search In All The Possible Sub-Arrays : \n";
    cin>>k;
    int ans = subarraySum(v, k);
    cout<<"\n\nThe Total Number Of Sub-Arrays With The Given Target Sum Is : "<<ans;
    cout<<"\n\n";
    system("pause");
}
