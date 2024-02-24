#include "iostream"
#include "vector"
#include "unordered_map"
using namespace std;

int countNicePairs(vector<int>& v){
    if (v.size() == 1) return 0;
    unordered_map<int,int> m;
    long long count = 0;
    for (int x : v){
        int rev = 0, temp = x;
        for (; temp; temp/=10) rev = rev*10 + temp%10;
        temp = x - rev;
        if (m.find(temp) != m.end()) count += (long long)m[temp];
        m[temp]++;
    }
    return count%1000000007;
}

int main(){
    cout<<"\nEnter The Number Of Elements Present In The Vector : \n";
    int n;
    cin>>n;
    cout<<"\n\nEnter The Elements Of The Vector : \n";
    vector<int> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    int ans = countNicePairs(v);
    cout<<"\n\nThe Total Number Of Nice Pairs Found Are : "<<ans;
    cout<<"\n\n";
    system("pause");
}