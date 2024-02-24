#include "iostream"
#include "string"
#include "algorithm"
using namespace std;
int main(){
    //  Given an array of strings. Check whether they are anagram or not.
    //  Input : s = "car" , t = "arc"
    //  Output : True
    string s1,s2;
    cout<<"Enter The First String :\n";
    cin>>s1;
    cout<<"Enter The Second String :\n";
    cin>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if (s1==s2) cout<<"\nTrue\n\n";
    else cout<<"\nFalse\n\n";
    system("pause");
}