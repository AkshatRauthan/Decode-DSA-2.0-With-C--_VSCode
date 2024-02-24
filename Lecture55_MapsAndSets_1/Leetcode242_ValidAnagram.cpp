#include "iostream"
#include "unordered_map"
using namespace std;

bool isValidAnagram(string& str1, string& str2){
    if (str1.length() != str2.length()) return false;
    unordered_map<char,int> m;
    for (auto s : str1) m[s]++;
    for (auto s : str2){
        if (m.find(s) == m.end()) return false;
        else if (m[s] == 1) m.erase(s);
        else m[s]--;
    }
    return true;
}

int main(){
    string str1, str2;
    cout<<"\nEnter The First String : \n";
    cin>>str1;
    cout<<"\nEnter The Second String : \n";
    cin>>str2;
    cout<<"\n\n";
    if (isValidAnagram(str1,str2)) cout<<"Yes, The Given Two Strings Are Valid Anagrams.";
    else cout<<"No, The Given Two String Are Not Valid Anagrams.";
    cout<<"\n\n";
    system("pause");
}