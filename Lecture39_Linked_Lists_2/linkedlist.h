//
// Created by HP on 11/30/2023.
//
#include "iostream"
using namespace std;
#ifndef DECODE_DSA_2_0_WITH_C___LINKEDLIST_H
#define DECODE_DSA_2_0_WITH_C___LINKEDLIST_H

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
        for (Node* temp = head; temp != nullptr; temp = temp->next) cout<< temp->val <<"  ";
    }
    Node* findNode(int val){
        Node* node = new Node(0,nullptr);
        for (Node* temp = head; temp->next != nullptr || node == tail; temp=temp->next) if (temp->val == val) return temp;
        return node;
    }
};

void initializeLinkedList(LinkedList& l){
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

#endif //DECODE_DSA_2_0_WITH_C___LINKEDLIST_H