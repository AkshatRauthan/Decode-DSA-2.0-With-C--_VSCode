#include "iostream"
#include "stack"
using namespace std;

class MyQueue{
public:
    stack<int> st;

    MyQueue() = default;

    // Stack : First In Last Out
    // Queue : First In First Out

    bool empty(){
        return st.empty();
    }

    void push(int n){
        st.push(n);
    }

    int peek(){
        stack<int> s = st;
        while (s.size() != 1 && !s.empty()) s.pop();
        return s.top();
    }

    int pop(){
        stack<int> s;
        while (st.size() != 1 && !st.empty()){
            s.push(st.top());
            st.pop();
        }
        int temp = st.top();
        st.pop();
        while (!s.empty()){
            st.push(s.top());
            s.pop();
        }
        return temp;
    }
};