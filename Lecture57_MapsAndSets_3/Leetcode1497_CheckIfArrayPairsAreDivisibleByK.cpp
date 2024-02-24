#include "iostream"
#include "unordered_map"
#include "vector"
using namespace std;

bool canArrange(vector<int>& v, int k){
    unordered_map<int,int> m;
    for (int x : v) m[(x%k + k)%k]++;
    if (m[0]%2) return false;
    for (int i=1; i<(k+1)/2; i++) if (m[i] != m[k-i]) return false;
    return true;
}

int main(){
    cout<<"\nEnter The length of The Vector : \n";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int k;
    cout<<"\n\nEnter The Value Of K : \n";
    cin>>k;
    if (canArrange(v,k)) cout<<"\n\nYes, The Given Vector Can Be Divided Into Pairs Of Two Whose Sum Is Divided By "<<k;
    else cout<<"\n\nNo, The Given Vector Can Not Be Divided Into Pairs Of Two Whose Sum Is Divided By "<<k;
    cout<<"\n\n";
    system("pause");
}