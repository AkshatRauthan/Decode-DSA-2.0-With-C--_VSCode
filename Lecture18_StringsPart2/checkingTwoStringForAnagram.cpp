#include <algorithm>
#include "iostream"
#include "string"
using namespace std;
int main() {
    string str1,str2;
    cout<<"\nEnter The First String :\n";
    getline(cin,str1);
    cout<<"\nEnter The Second String :\n";
    getline(cin,str2);
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if (str1 == str2) cout<<"\nYes, The Two Strings Are Anagrams.\n\n";
    else cout<<"\nNo, The Two Strings Are Not Anagrams.\n\n";
    system("pause");
}