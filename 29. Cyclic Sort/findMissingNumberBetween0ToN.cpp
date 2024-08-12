#include "iostream"
#include "vector"
using namespace std;

void cyclicSort(vector<int>& v){
    int i=0;
    while (i < v.size()){
        if (v[i] == i || v[i] == v.size()) i++;
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
    cyclicSort(v);
    cout<<"\nAll The Numbers After Sorting Are As Follows :\n";
    for (int x : v) cout<<x<<"  ";
    for (int i=0; i<v.size(); i++){
        if (v[i] != i) {
            cout<<"\n\nThe Missing Number In The Vector Is : "<<i;
            break;
        } else if (i == v.size()-1) cout<<"\n\nThe Missing Number In The Vector Is : "<<i+1;
    }
    cout<<"\n\n";
    system("pause");
}