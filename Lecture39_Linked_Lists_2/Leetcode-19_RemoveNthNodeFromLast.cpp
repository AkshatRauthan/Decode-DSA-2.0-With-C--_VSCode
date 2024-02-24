#include "iostream"
#include "linkedlist.h"
using namespace std;

LinkedList ll;

void removeNthNodeFromLast(Node* node, int n){
    Node* slow = node;
    Node* fast = node;
    Node* temp;
    for (int i=1; i<n; i++) fast = fast->next;
    while (fast->next != nullptr){
        temp = slow;
        fast = fast->next;
        slow = slow->next;
    }
    if (n == 1) {
        temp->next = nullptr;
        return;
    }
    slow->val = slow->next->val;
    slow->next = slow->next->next;
}

int main() {
    cout << "\nEnter The Number Of Nodes To Be Present In The Linked List : \n";
    int n;
    cin >> n;
    cout << "\nEnter The Elements Of The Linked List :\n";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        ll.insertAtIdx(temp, i);
        ll.size++;
    }
    cout << "\nThe Given Linked List Is As Follows : \n";
    ll.display();
    int nth;
    cout<<"\n\nEnter The Value Of N \n";
    cin>>nth;
    removeNthNodeFromLast(ll.head, nth);
    cout<<"\nThe Linked List After Removing The "<<nth<<"th Node From The End Is :\n";
    ll.display();
    cout<<"\n\n";
    system("pause");
}