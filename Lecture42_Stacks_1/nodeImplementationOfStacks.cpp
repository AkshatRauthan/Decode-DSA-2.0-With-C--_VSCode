#include "iostream"
#include "linkedlist"
using namespace std;

class stack{
public:
    Node* head;
    int size;
    stack(){
        size = 0;
        head = nullptr;
    }

    void push(int n){
        Node* temp = new Node(n);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop(){
        if (size == 0) cout<<"Oops! The Given Stack Is Empty.\n";
        else{
            head = head->next;
            size--;
        }
    }

    int top(){
        if (size == 0) cout<<"Oops! The Stack Is Empty.\n";
        else return head->val;
        return -1;
    }

    void displayRev(){
        if (size == 0){
            cout<<"Oops! The Stack Is Empty.\n";
            return;
        }
        cout<<"The Given Stack In Reverse Order Is As Follows : \n";
        for (Node* temp = head; temp != nullptr; temp = temp->next) cout<<temp->val<<"  ";
    }

    void display(Node* temp){
        if (temp == nullptr) return;
        display(temp->next);
        cout<<temp->val<<"  ";
    }
};

int main(){
    stack st;
    st.pop();
    st.display(st.head);
    cout<<st.size<<"\n";
    st.push(0);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.size<<"\n";
    cout<<"The Given Stack Is As Follows : \n";
    st.display(st.head);
    cout<<"\n";
    st.displayRev();
}