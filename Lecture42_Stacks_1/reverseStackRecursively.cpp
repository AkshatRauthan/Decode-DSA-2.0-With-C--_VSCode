#include "iostream"
#include "stack"
using namespace std;

void pushAtBottom(stack<int>& st, int n){
    if (st.size() == 0) {
        st.push(n);
        return;
    }
    int temp = st.top();
    st.pop();
    pushAtBottom(st,n);
    st.push(temp);
}

void reverse(stack<int>& st){
    if (st.size() == 1) return;
    int t = st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,t);
}

void print(stack<int>& st, bool reverse = false){
    if (st.size() == 0) return;
    int n = st.top();
    if (reverse) cout<<n<<"  ";
    st.pop();
    print(st,reverse);
    if (!reverse) cout<<n<<"  ";
    st.push(n);
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
    cout<<"\n\nThe Stack After Reversal Is As Follows : \n";
    reverse(st);
    print(st);
}
