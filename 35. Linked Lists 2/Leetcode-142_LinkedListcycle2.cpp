#include "iostream"
#include "linkedlist"
using namespace std;

Node* foundLoop(Node* head){
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }
    if (fast == nullptr || fast->next == nullptr) return nullptr;
    Node* temp = head;
    while (temp != slow){
        slow = slow->next;
        temp = temp->next;
    } return temp;
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
    Node* node = foundLoop(l1.head);
    if (node != nullptr){
        cout<<"\nThe Value Of The First Node Of The Loop Is : "<<node->val;
    } else cout<<"\nThere Is Loop In The Given Linked List\n";
    cout<<"\n";
    system("pause");
}