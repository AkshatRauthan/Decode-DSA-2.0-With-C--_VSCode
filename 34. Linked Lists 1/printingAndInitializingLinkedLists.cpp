#include "iostream"
using namespace std;

class Node{
public:
    int val;
    Node* next;
    explicit Node(int val, Node* next = nullptr){
        this->val = val;
        this->next = next;
    }
    Node() = default;
};

void display1(Node* head){
    cout<<"\nThe Given Linked List Is As Follows : \n";
    cout<<head -> val;
    for (head = head -> next; head != nullptr; head = head->next) cout<<" -> "<<head->val;
}

void displayReverse(Node* head){
    if (head == nullptr) return;
    displayReverse(head -> next);
    cout<<head -> val<<" ";
}
void display2(Node* head){
    if (head == nullptr) return;
    cout<<head -> val<<" ";
    display2(head -> next);
}

int count(Node* head){
    int n = 0;
    for (Node* temp = head; temp != nullptr; temp = temp->next, n++);
    return n;
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a -> next = b;
    b -> next = c;
    c -> next = d;
    d -> next = e;
    displayReverse(a);
    cout<<"\n\nThe Size Of The Above Linked List Is : "<<count(a);
    cout<<"\n\n";
    system("pause");
}
