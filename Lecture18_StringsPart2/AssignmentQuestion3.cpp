#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
using namespace std;
int main(){
    //  Input a string and return the number of substrings that contain only vowels.
    //  Input : str = "abjkoe"
    //  Output : 4
    //  Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
    //  Input : str = "hgdhpw"
    //  Output : 0
    string s1;
    vector<string> v;
    cout<<"\nEnter The String :\n";
    cin>>s1;
    for (int i=0;i<s1.size();i++){
        string temp="1";
        if (s1[i]=='a' || s1[i]=='e'|| s1[i]=='i'|| s1[i]=='o'|| s1[i]=='u') {
            temp=s1[i];
            v.push_back(temp);
            for (int j=i+1;(s1[j]=='a' || s1[j]=='e'|| s1[j]=='i'|| s1[j]=='o'|| s1[j]=='u');j++) temp += s1[j];
        }
        if (temp != "1" && temp.size()>1) v.push_back(temp);
    }
    sort(v.begin(),v.end());
    if (!v.empty()) {
        cout << "\nThe " << v.size() << " Required Sub-strings Present In The Input String Are :\n";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
    }
    else cout<<"\nOops! There Are No Vowels In The Input String.";
    cout<<"\n\n";
    system("pause");
}