#include "iostream"
#include "linkedlist"
using namespace std;

LinkedList ll;

Node* returnMid(Node* headNode){
    int n = 1;
    for (Node* temp = headNode; temp->next != nullptr; temp = temp->next) n++;
    Node* mid = headNode;
    for (int i=1; i<=n/2; i++) mid = mid->next;
    return mid;
}

Node* returnMidOpt(Node* headNode){
    Node* slow = headNode;
    Node* fast = headNode;
    for (; fast != nullptr && fast->next != nullptr; fast = fast->next->next, slow = slow->next);
    return slow;
}

int main(){
    cout<<"\nEnter The Number Of Nodes To Be Present In The Linked List : \n";
    int n;
    cin>>n;
    cout<<"\nEnter The Elements Of The Linked List :\n";
    for (int i=0; i<n; i++){
        int temp;
        cin>>temp;
        ll.insertAtIdx(temp,i);
        ll.size++;
    }
    cout<<"\nThe Given Linked List Is As Follows : \n";
    ll.display();
    Node* mid = returnMidOpt(ll.head);
    cout<<"\n\nThe Value Of The Middle Node Of The Given Linked List Is : \n";
    cout<<mid->val;
    cout<<"\n\n";
    system("pause");
}