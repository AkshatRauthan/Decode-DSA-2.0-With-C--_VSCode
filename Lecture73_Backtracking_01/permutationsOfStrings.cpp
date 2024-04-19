#include "iostream"
#include "string"
#include "vector"
using namespace std;

void strPermutations(string str, string prm, vector<string>& v){
    if (str.empty()){
        v.push_back(prm);
        return;
    }
    for (int i=0; i<str.length(); i++){
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        strPermutations(left + right, prm + str[i], v);
    }
    
}

int main(){
    string s;
    cout<<"\nEnter The String Whose Permutations You Want To Calculate : \n";
    cin>>s;
    vector<string> v;
    strPermutations(s, "", v);
    cout<<"\nThe "<<v.size()<<" Permutations Of The Given String Are As Follows : \n";
    for (auto str : v) cout<<str<<"\n";
    system("pause");
}