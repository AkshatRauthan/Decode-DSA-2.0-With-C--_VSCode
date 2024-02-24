#include "iostream"
#include "string"
#include "vector"
using namespace std;

// Question : Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

vector<string> allStrings;

void printAllStrings(){
    cout<<"\nAll The Possible Strings Are As Follows : \n";
    for (string x : allStrings) cout<<x<<endl;
}

void generateParenthesis(int n, string str, int start, int end){
    if (start == n  && end == n){
        allStrings.push_back(str);
        return;
    }
    if (start < end) return;
    if (start == n) return generateParenthesis(n,str+')',start,end+1);
    return generateParenthesis(n,str+'(',start+1,end),generateParenthesis(n,str+')',start,end+1);
}

int main(){
    int n;
    cout<<"\nEnter The Value Of n : \n";
    cin>>n;
    generateParenthesis( n, "", 0, 0);
    printAllStrings();
    cout<<"\n\n";
    system("pause");
}