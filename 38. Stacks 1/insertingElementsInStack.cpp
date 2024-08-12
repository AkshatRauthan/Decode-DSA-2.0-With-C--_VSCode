#include "iostream"
#include "stack"
using namespace std;

void pushAtBottom(stack<int>& st, int n){
    stack<int> temp;
    for (; st.size()!=0; st.pop()) temp.push(st.top());
    temp.push(n);
    for (; temp.size()!=0; temp.pop()) st.push(temp.top());
}

void insertAtIdx(stack<int>& st, int idx, int n){
    stack<int>temp;
    for (; st.size() > idx; st.pop()) temp.push(st.top());
    st.push(n);
    for (; temp.size()!=0; temp.pop()) st.push(temp.top());
}

void print(stack<int> st){
    stack<int> temp;
    for (; st.size()!=0; st.pop()) temp.push(st.top());
    for (; temp.size()!=0; temp.pop()) cout<<temp.top()<<"  ";
    cout<<endl;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<"\nThe Stack Is As Follows : \n";
    print(st);
    insertAtIdx(st,5,55);
    cout<<"\nThe Stack After Inserting The Element Is As Follows : \n";
    print(st);
}