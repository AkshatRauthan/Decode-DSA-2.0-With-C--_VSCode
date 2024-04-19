#include "iostream"
#include "string"
#include "vector"
#include "unordered_set"
using namespace std;

// Permutations Of Strings Having  Repeated Values

void strPermutations(string& str, int idx, vector<string>& v){
    if (idx >= str.length()-1){
        v.push_back(str);
        return;
    }
    unordered_set<char> s;
    for (int i = idx; i<str.length(); i++){
        if (s.find(str[i]) != s.end()) continue;    // Pruning
        else s.insert(str[i]);
        swap(str[i], str[idx]);
        strPermutations(str, idx+1, v);
        swap(str[i], str[idx]);          // Backtracking
    }
}

int main(){
    string s;
    cout<<"\nEnter The String Whose Permutations You Want To Calculate : \n";
    cin>>s;
    vector<string> v;
    strPermutations(s, 0, v);
    cout<<"\nThe "<<v.size()<<" Permutations Of The Given String Are As Follows : \n";
    for (auto str : v) cout<<str<<"\n";
    system("pause");
}