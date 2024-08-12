#include "iostream"
using namespace std;

class stack{
public:
    int arr[5]{};
    int idx = -1;

    void push(int val){
        if (idx == 4){
            cout<<"\nStack Is Full!\n";
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop(){
        if (idx == -1) {
            cout << "\nStack Is Empty!\n";
            return;
        }
        idx--;
    }

    int top(){
        if (idx == -1) {
            cout << "\nStack Is Empty!\n";
            return -1;
        }
        else return arr[idx];
    }

    int size(){
        return idx+1;
    }
};

int main(){
    stack st;
    st.push(0);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    cout<<st.size()<<"\n";
}