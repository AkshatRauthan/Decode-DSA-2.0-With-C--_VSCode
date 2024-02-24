#include "iostream"
#include "vector"
using namespace std;

int cyclicSort(vector<int>& v){
    int i=0;
    while (i < v.size()){
        if (v[i] == i) i++;
        else if (v[i] == v[v[i]]) return v[i];
        else swap(v[i],v[v[i]]);
    }
}

int main(){
    cout<<"\nEnter The Value Of n : \n";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter All The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int dup = cyclicSort(v);
    cout<<"\nThe Duplicate Element In The Vector Is : "<<dup;
    cout<<"\n\n";
    system("pause");
}