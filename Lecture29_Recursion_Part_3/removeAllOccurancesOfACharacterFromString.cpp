#include "iostream"
#include "string"
using namespace std;

string removeOccur(string str, int idx, char ch){
    if (str[idx] == '\0') return "";
    else if (str[idx] == ch) return removeOccur(str, idx+1, ch);
    return str[idx] + removeOccur(str, idx+1, ch);
}

int main(){
    cout<<"\nEnter Ths Required String : \n";
    string str;
    getline(cin,str);
    cout<<"\nEnter The Character You Want To Remove From The String : \n";
    char ch;
    cin>>ch;
    str = removeOccur(str, 0, ch);
    cout<<"\nThe Final String Is : "<<str<<"\n\n";
    system("pause");
}