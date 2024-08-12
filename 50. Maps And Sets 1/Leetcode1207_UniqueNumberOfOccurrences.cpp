#include "iostream"
#include "vector"
#include "unordered_map"
#include "unordered_set"
using namespace std;

bool uniqueOccurrences(vector<int>& v){
    if (v.empty() || v.size() == 1) return true;
    unordered_map<int,int> m;
    unordered_set<int> s;
    for (int x : v) m[x]++;
    for (auto p : m){
        if (s.find(p.second) != s.end()) return false;
        s.insert(p.second);
    }
    return true;
}

int main(){
    cout<<"\nEnter The Number Of Elements In The Vector\n";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    cout<<"\n\n";
    if (uniqueOccurrences(v)) cout<<"Yes, The Elements Of The Vector Has Unique Number Of Occurrences";
    else cout<<"No, The Elements Of The Vector Do Not Have Unique Number Of Occurrences.";
    cout<<"\n\n";
    system("pause");
}