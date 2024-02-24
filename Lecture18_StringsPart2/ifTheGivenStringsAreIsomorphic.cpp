#include "algorithm"
#include "iostream"
#include "string"
#include "vector"
using namespace std;

// Two Strings Are Isomorphic If The Placement Of Characters In Both The Strings Is Similar At All Indices.
// For Ex. ==> egg and add, paper and title.

bool stringsAreIsomorphic(string& s,string& t){
    if (s.length() !=t.length()) return false;
    vector <int> v(150,1000);
    for(int i=0;i<s.length();i++){
        int index=(int)s[i];
        if (v[index]==1000) v[index] = s[i]-t[i];
        else if (v[index] != s[i]-t[i]) return false;
    }
    for (int i=0;i<150;i++) v[i]=1000;
    for(int i=0;i<s.length();i++){
        int index=(int)t[i];
        if (v[index]==1000) v[index] = s[i]-t[i];
        else if (v[index] == s[i]-t[i]) return false;
    }
    return true;
}

int main(){
    cout<<"\nEnter The Two Strings Seperated By Whitespaces :\n";
    string str1,str2;
    cin>> str1;
    cin>> str2;
    bool b = stringsAreIsomorphic(str1,str2);
    if (b) cout << "\nYes, The Given Strings Are Isomorphic.\n\n";
    else cout<<"\nNo, The Given Strings Are Not Isomorphic.\n\n";
    system("pause");
}