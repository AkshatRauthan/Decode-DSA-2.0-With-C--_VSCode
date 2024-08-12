#include "iostream"
#include "vector"
using namespace std;

// There Are Integers From 1 to N in Input. Return All The Missing Numbers Present In It.
// In The Input Vector Some Numbers Are Missing And The Same Numbers Of Elements Are Duplicate.

void findMissingElements(vector<int>& v){
    int i=0;
    while (i < v.size()){
        if (v[i] == i+1 || v[i] == v[v[i]-1]) i++;
        else swap(v[i],v[v[i]-1]);
    }
}

int main(){
    cout<<"\nEnter The Size Of The Vector : \n";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector :\n";
    for (int i=0; i<n; i++) cin>>v[i];
    findMissingElements(v);
    cout<<"\nAll The Missing Elements In The Input Vector Are : ";
    for (int i=0; i<v.size(); i++) if (v[i] != i+1) cout<<i+1<<"  ";
    cout<<"\n\n";
    system("pause");
}
