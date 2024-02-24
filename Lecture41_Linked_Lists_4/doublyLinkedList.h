#ifndef DECODE_DSA_2_0_WITH_C___DOUBLYLINKEDLIST_H
#define DECODE_DSA_2_0_WITH_C___DOUBLYLINKEDLIST_H

#include "iostream"
using namespace std;

class doubleNode {
public:
    int val;
    doubleNode* next;
    doubleNode* pre;

    explicit doubleNode(int val, doubleNode* next = nullptr, doubleNode* prev = nullptr){
        this->val = val;
        this->next = next;
        this->pre = prev;
    }
    doubleNode() = default;
};

class doublyLinkedList {
public:
    doubleNode* head = nullptr;
    doubleNode* tail = nullptr;
    int size;

    doublyLinkedList(){
        head = tail = nullptr;
        size = 0;
    }
    void insertAtTail(int val){
        doubleNode* temp = new doubleNode(val);
        if (tail != nullptr) {
            temp->pre = tail;
            tail->next = temp;
            tail = temp;
        }
        else head = tail = temp;
        size++;
    }
    void insertAtHead(int val){
        doubleNode* temp = new doubleNode(val);
        if (head != nullptr) {
            head->pre = temp;
            temp->next = head;
            head = temp;
        }
        else head = tail = temp;
        size++;
    }
    void insertAtIdx(int val, int idx) {
        if (idx < 0 || idx > size) cout << "\nOops! Invalid Index Entered\n";
        else if (idx == 0) insertAtHead(val);
        else if (idx == size) insertAtTail(val);
        else if (idx < size/2) {
            doubleNode *temp = new doubleNode(val);
            doubleNode *node = head;
            for (int pos = 1; pos != idx; pos++) node = node->next;
            temp->pre = node;
            temp->next = node->next;
            node->next->pre = temp;
            node->next = temp;
            size++;
        }
        else {
            doubleNode * temp = new doubleNode(val);
            doubleNode *node = tail;
            for (int pos = size-1; pos >= idx; pos--) node = node->pre;
            temp->pre = node;
            temp->next = node->next;
            node->next->pre = temp;
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
        else if (idx <= size /2) {
            doubleNode* node = head->next;
            for (int count = 1; count != idx; count++) node = node->next;
            return node->val;
        }
        else {
            doubleNode* node = tail;
            for (int pos = size-1; pos != idx; pos--) node = node->pre;
            return node->val;
        }
    }
    void deleteHead(){
        doubleNode* temp = head;
        head->next->pre = nullptr;
        head = head->next;
        delete temp;
        size--;
    }
    void deleteTail(){
        tail->pre->next = nullptr;
        tail = tail->pre;
        size--;
    }
    void deleteAtIdx(int idx) {
        if (idx == 0){
            deleteHead();
            return;
        }
        else if (idx >= size || idx < 0){
            cout<<"\nOops! Invalid Index Entered!\n";
            return;
        }
        else if (idx == size - 1){
            deleteTail();
            return;
        }
        else {
            doubleNode* temp;
            if (idx <= size - 1){
                temp = head;
                for (int pos = 0; pos != idx; pos++) temp = temp->next;
            }
            else {
                temp = tail;
                for (int pos = size-1; pos != idx; pos--) temp = temp->pre;
            }
            temp->pre->next = temp->next;
            temp->next->pre = temp->pre;
            delete temp;
        }
    }
    void deleteElement(int ele){
        doubleNode* temp = head;
        for (int i =0; i<size && temp!=nullptr;i++, temp = temp->next) {
            if (ele == temp->val){
                temp->pre->next = temp->next;
                temp->next->pre = temp->pre;
                delete temp;
                return;
            }
        }
        cout<<"\nOops! The Entered Element Is Not Present In The Liked List.\n";
    }
    void display(){
        for (doubleNode* temp = head; temp != nullptr; temp = temp->next) cout<< temp->val <<"  ";
    }
    void displayReverse(){
        for (doubleNode* temp = tail; temp != nullptr; temp = temp->pre) cout<< temp->val <<"  ";
    }
    doubleNode* findNode(int val){
        doubleNode* node = new doubleNode(0,nullptr);
        for (doubleNode* temp = head; temp->next != nullptr || node == tail; temp=temp->next) if (temp->val == val) return temp;
        return node;
    }
};

void initializeLinkedList(doublyLinkedList& l){
    cout << "\nEnter The Number Of Nodes To Be Present In The Linked List : \n";
    int n;
    cin >> n;
    cout << "\nEnter The Elements Of The Linked List :\n";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        l.insertAtTail(temp);
        l.size++;
    }
}



#endif //DECODE_DSA_2_0_WITH_C___DOUBLYLINKEDLIST_H
