#include "iostream"
#include "string"
#include "vector"
using namespace std;

// Permutations Of Strings Having No Repeated Values

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

void strPermutationsOptimised(string& str, int idx, vector<string>& v){
    if (idx >= str.length()-1){
        v.push_back(str);
        return;
    }
    for (int i = idx; i<str.length(); i++){
        swap(str[i], str[idx]);
        strPermutationsOptimised(str, idx+1, v);
        swap(str[i], str[idx]);    // Backtracking
    }
}

int main(){
    string s;
    cout<<"\nEnter The String Whose Permutations You Want To Calculate : \n";
    cin>>s;
    vector<string> v;
    strPermutationsOptimised(s, 0, v);
    cout<<"\nThe "<<v.size()<<" Permutations Of The Given String Are As Follows : \n";
    for (auto str : v) cout<<str<<"\n";
    system("pause");
}