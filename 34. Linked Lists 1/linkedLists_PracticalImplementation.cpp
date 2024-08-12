#include "iostream"
using namespace std;

class Node {
public:
    int val;
    Node* next;
    explicit Node(int val, Node* next = nullptr){
        this->val = val;
        this->next = next;
    }
    Node() = default;
};

class LinkedList {
public:
    Node* head = nullptr;
    Node* tail = nullptr;
    int size;

    LinkedList(){
        head = tail = nullptr;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if (tail != nullptr) {
            tail->next = temp;
            tail = temp;
        }
        else head = tail = temp;
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if (head != nullptr) {
            temp->next = head;
            head = temp;
        }
        else head = tail = temp;
        size++;
    }
    void insertAtIdx(int val, int idx){
        if (idx < 0 || idx > size) cout<<"\nOops! Invalid Index Entered\n";
        else if (idx == 0) insertAtHead(val);
        else if (idx == size) insertAtTail(val);
        else {
            Node *temp = new Node(val);
            Node *node = head;
            for (int pos = 1; pos != idx; pos++) node = node->next;
            temp->next = node->next;
            node->next = temp;
            size++;
        }
    }
    int getAtIdx(int idx){
        if (idx < 0 || idx > size-1){
            cout<<"\nOops! Invalid Index Entered\n";
            return -1;
        }
        else if (idx == 0) return head->val;
        else if (idx == size-1) return tail->val;
        else {
            Node* node = head->next;
            for (int count = 1; count != idx; count++) node = node->next;
            return node->val;
        }
    }
    void deleteHead(){
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }
    void deleteTail(){
        deleteAtIdx(size-1);
    }
    void deleteAtIdx(int idx) {
        if (idx == 0){
            deleteHead();
            return;
        }
        else if (idx >= size){
            cout<<"\nOops! Invalid Index Entered!\n";
            return;
        }
        else {
            Node *temp1 = head, *temp2 = nullptr;
            for (int i = 0; idx > i; i++) {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            temp2->next = temp1->next;
            delete temp1;
            size--;
        }
    }
    void deleteElement(int ele){
        Node* temp = head;
        for (int i =0; i<size && temp!=nullptr;i++, temp = temp->next) {
            if (ele == temp->val){
                deleteAtIdx(i);
                return;
            }
        }
        cout<<"\nOops! The Entered Element Is Not Present In The Liked List.\n";
    }
    void display(){
        cout<<"\nThe Linked List Class Is Initialized As Follows : \n";
        for (Node* temp = head; temp != nullptr; temp = temp->next) cout<< temp->val <<"  ";
    }
};

int main(){
    LinkedList ll;
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtHead(10);
    ll.insertAtHead(0);
    ll.insertAtTail(50);
    ll.insertAtTail(60);
    ll.display();
    ll.insertAtIdx(40,4);
    ll.display();
    ll.deleteElement(0);
    ll.display();
    ll.deleteElement(0);
    cout<<"\n\n";
    system("pause");
}
