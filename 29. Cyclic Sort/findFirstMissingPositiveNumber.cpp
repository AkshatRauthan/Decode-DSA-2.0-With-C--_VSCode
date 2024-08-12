#include "iostream"
#include "vector"
using namespace std;

void firstMissingPositive(vector<int>& v){
    int i=0;
    while (i < v.size()){
        if (v[i] == i+1 || v[i] >= v.size() || v[i] <= 0 || v[v[i]-1] == v[i]) i++;
        else swap(v[i],v[v[i]-1]);
    }
}

int main(){
    cout<<"\nEnter The Value Of n : \n";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter All The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    firstMissingPositive(v);
    cout<<"\nThe First Missing Positive Number Is : ";
    for (int i=0; i<v.size(); i++) {
        if (v[i] != i+1){
            cout <<i+1;
            break;
        }
        if (i == v.size()-1) cout<<i+2;
    }
    cout<<"\n\n";
    system("pause");
}