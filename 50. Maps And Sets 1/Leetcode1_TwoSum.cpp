#include "iostream"
#include "unordered_map"
#include "vector"
using namespace std;

vector<int> twoSum(vector<int>& v, int& n){
    unordered_map<int,int> m;
    for (int i=0; i<v.size(); i++){
        if (m.find(n-v[i]) != m.end()) return {i,m[n-v[i]]};
        else m[v[i]] = i;
    }
    return {};
}

int main(){
    cout<<"\nEnter The Length Of The Vector : \n";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    cout<<"\n\nEnter The Value Of The Target Sum : \n";
    cin>>n;
    vector<int> ans = twoSum(v,n);
    cout<<"\n\n";
    if (ans.empty()) cout<<"No, The Target Sum Is Not Found In The Vector.";
    else cout<<"The Indices Of The Elements With The Target Sum Are : "<<ans[0]<<" And "<<ans[1];
    cout<<"\n\n";
    system("pause");
}