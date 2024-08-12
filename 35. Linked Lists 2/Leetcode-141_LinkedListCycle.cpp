#include "iostream"
#include "linkedlist"
using namespace std;

bool hasLoop(Node* head){
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast ) return true;
    }
    return false;
}

int main(){
    LinkedList l1;
    initializeLinkedList(l1);
    cout<<"\nDo You Want To Create A Cycle In The Linked List : \n";
    int n;
    cin>>n;
    if (n == 1){
        cout<<"\nEnter The Number Of Node To Which You Want To Connect The Tail Of The Linked LIst : \n";
        cin>>n;
        Node* temp = l1.head;
        for (int i=1; i<n; i++) temp = temp->next;
        l1.tail->next = temp;
    }
    if (hasLoop(l1.head)) cout<<"\nYes, The Given Linked List Has A Cycle In It\n";
    else cout<<"\nThe Given List Has NO Cycle In It.\n";
    cout<<"\n\n";
    system("pause");
}