#include "iostream"
#include "stack"
using namespace std;

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
    cout<<"\nThe Stack Is As Follows : \n";
    print(st);
    cout<<"\n\nThe Stack In Reverse Order Is As Follows : \n";
    for(stack<int> temp=st; temp.size()!=0; temp.pop()) cout<<temp.top()<<"  ";
}