#include "iostream"
#include "linkedlist"
using namespace std;

Node* mergeSortedLists(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node *head = nullptr;
    Node* temp = head;

}

int main(){
    LinkedList l1, l2, lFinal;
    cout<<"\nInitializing The First Sorted Linked List : \n";
    initializeLinkedList(l1);
    cout<<"\nInitializing The Second Sorted Linked List : \n";
    initializeLinkedList(l2);
    lFinal.head = mergeSortedLists(l1.head, l2.head);
    cout<<"\n\nThe Final Merged List Is As Follows : \n";
    lFinal.display();
    cout<<"\n\n";
    system("pause");
}