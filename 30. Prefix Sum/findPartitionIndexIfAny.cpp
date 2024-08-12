#include "iostream"
#include "vector"
using namespace std;

// Partition Index Is An Index Such That The Sum Of All Elements Of The Array From 1 To It Is Equal To
// The Sum Of The Remaining Elements.

void findPartitionIndex(vector<int>& v, int& idx){
    for (int i=1; i<v.size(); i++) v[i] += v[i-1];
    for (int i=0; i<v.size(); i++) if (2*v[i] == v[v.size()-1]){
        idx = i;
        return;
    }
}

int main(){
    cout<<"\nEnter The Number Of Elements Present In The Vector : \n";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int p_idx = -1;
    findPartitionIndex(v,p_idx);
    if (p_idx == -1) cout<<"\nOops! The Given Vector Do Not Have Any Partition Index : \n";
    else{
        cout<<"\nThe Partition Index of The Given Vector Is : "<<p_idx;
        cout<<"\nThe Sum Of The Partition Vectors Is : "<<v[p_idx];
    }
    cout<<"\n\n";
    system("pause");
}