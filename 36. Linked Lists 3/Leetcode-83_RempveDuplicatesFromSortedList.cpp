#include "iostream"
#include "linkedlist"

void removeDuplicates(Node* head){
    for (Node* temp = head; temp != nullptr && temp->next != nullptr; ){
        if (temp->val == temp->next->val) temp->next = temp->next->next;
        else temp = temp->next;
    }
}

int main(){
    LinkedList l1;
    cout<<"\nRemember That You Have To Input An Sorted List : \n";
    initializeLinkedList(l1);
    cout<<"\nThe Entered Linked List Is As Follows : \n";
    l1.display();
    removeDuplicates(l1.head);
    cout<<"\n The Linked List After Removing Duplicate Elements Is As Follows :\n";
    l1.display();
    cout<<"\n\n";
    system("pause");
}