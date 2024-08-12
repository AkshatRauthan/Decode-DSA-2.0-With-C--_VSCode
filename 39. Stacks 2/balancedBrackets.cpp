#include "iostream"
#include "stack"
#include "string"
using namespace std;

bool hasBalancedBrackets(string str){
    if ((str[0] != '(' && str[0] != ')') || str.length()%2 != 0) return false;
    stack<bool> st;
    for (char ch : str){
        if (ch == '(') st.push(true);
        else{
            if (st.size() == 0) return false;
            st.pop();
        }
    }
    return true;
}

int main(){
    string str;
    cout<<"\nEnter The String Of Parenthesis To Check :\n";
    cin>>str;
    if (hasBalancedBrackets(str)) cout<<"\nYes, The Given String Is Balanced.\n";
    else cout<<"\nNo, The Given String Is Not Balanced.\n";
}