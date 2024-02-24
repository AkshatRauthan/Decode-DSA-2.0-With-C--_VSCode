#include "iostream"
#include "string"
#include "sstream"
#include "vector"
#include "algorithm"
using namespace std;
int main(){
    //  Given a sentence ‘str’, return the word that is lexicographically maximum.
    //  Input : str = "proud to be pwians"
    //  Output : pwians
    //  Input : str = "decode dsa with pw"
    //  Output : with
    string s1;
    cout<<"\nEnter The Sentence You Want To Search :\n";
    getline(cin,s1);
    stringstream ss(s1);
    vector <string> v;
    for (string temp;ss>>temp;) v.push_back(temp);
    sort(v.begin(),v.end());
    cout<<"\nThe Lexicographically Maximum String In The Sentence Is : "<<v[v.size()-1]<<"\n\n";
    system("pause");
} 