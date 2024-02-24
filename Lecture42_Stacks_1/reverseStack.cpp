#include "iostream"
#include "stack"
using namespace std;

void reverseStack(stack<int>& st){
    stack<int> t1, t2;
    for (; st.size() != 0; st.pop()) t1.push(st.top());
    for (; t1.size() != 0; t1.pop()) t2.push(t1.top());
    for (; t2.size() != 0; t2.pop()) st.push(t2.top());
}

void print(stack<int> st){
    stack<int> temp;
    for (; st.size()!=0; st.pop()) temp.push(st.top());
    for (; temp.size()!=0; temp.pop()) cout<<temp.top()<<"  ";
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<"\nThe Stack In The Order Of Insertion Of Elements Is As Follows : \n";
    print(st);
    reverseStack(st);
    cout<<"\n\nThe Stack After Reversing Is As Follows : \n";
    print(st);
}