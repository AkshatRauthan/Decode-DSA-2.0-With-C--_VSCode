#include "iostream"
#include "vector"
using namespace std;

void cyclicSort(vector<int>& v,int idx){
    if (idx == v.size()) return;
    if (v[idx] == idx+1) return cyclicSort(v, idx+1);
    swap(v[idx],v[v[idx]-1]);
    return cyclicSort(v, idx);
}

int main(){
    cout<<"\nEnter The Value Of n : \n";
    int n;
    cin>>n;
    vector<int> v(n,0);
    cout<<"\nEnter All The Numbers From 1 To "<<n<<" In Unsorted Manner :\n";
    for (int i=0; i<n; i++) cin>>v[i];
    cyclicSort(v, 0);
    cout<<"\nAll The Numbers After Sorting Are As Follows :\n";
    for (int x : v) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
}