#include "iostream"
#include "linkedlist"
using namespace std;

Node* findIntersection(Node* head1, Node* head2){
    int n1 = 0, n2 = 0;
    for (Node* temp = head1; temp != nullptr; temp = temp->next, n1++);
    for (Node* temp = head2; temp != nullptr; temp = temp->next, n2++);
    if (n1 < n2) return findIntersection(head2, head1);
    while (n1 != n2){
        head1 = head1->next;
        n1--;
    }
    while (head1 != head2){
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 == head2 && head1 != nullptr) return head1;
    return nullptr;
}

int main(){
    LinkedList l1;
    cout<<"\nFor The First Linked List : \n";
    initializeLinkedList(l1);
    LinkedList l2;
    cout<<"\nFor The Second Linked List : \n";
    initializeLinkedList(l2);
    int n;
    cout<<"\nEnter The Number Of Node Of Second List To Which You Want To Connect First List's Tail\n";
    cin>>n;
    Node* n2 = l2.head;
    for (int i=1; i<n; i++, n2 = n2->next);
    l1.tail->next = n2;
    Node* intersection = findIntersection(l1.head, l2.head);
    if (intersection != nullptr){
        cout<<"\nThe Value Of The First Common Node Is :  "<<intersection->val;
        cout<<"\nThe Address Of The First Common Node Is :  "<<intersection;
    } else cout<<"\nThere Is No Common Node Amongst The Given Linked List\n";
    cout<<"\n\n";
    return 0;
}