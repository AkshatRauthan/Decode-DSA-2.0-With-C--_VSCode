#include "iostream"
#include "string"
#include "stack"
using namespace std;

void removeConsecutiveDuplicates(string& str){
    stack<char> st;
    st.push(str[0]);
    for (char ch : str){
        if (ch == st.top()) continue;
        st.push(ch);
    }
    str = "";
    while (st.size() != 0){
        char ch = st.top();
        str = ch + str;
        st.pop();
    }
}

int main(){
    string str;
    cout<<"\nEnter The String : \n";
    cin>>str;
    removeConsecutiveDuplicates(str);
    cout<<"\nThe String After Removing All The Duplicate Elements Is : "<<str;
    cout<<"\n\n";
    system("pause");
}