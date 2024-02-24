#include "iostream"
#include "linkedlist"
using namespace std;
//  You are given the node to be deleted node. You will not be given access to the first node of head.
//  All the values of the linked list are unique, and it is guaranteed that the given node is not the last node in the linked list.
//  Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:
//  The value of the given node should not exist in the linked list.
//  The number of nodes in the linked list should decrease by one.
//  All the values before node should be in the same order.
//  All the values after node should be in the same order.
LinkedList ll;

void deleteNode(Node* node){
    node->val = node->next->val;
    node->next = node->next->next;
    ll.size--;
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
    cout<<"\nEnter The Value Of The Node You Want To Delete : \n";
    int val;
    cin>>val;
    Node* node = ll.findNode(val);
    cout<<"\n"<<node->val<<"\n";
    deleteNode(node);
    cout<<"\nThe Linked List After Deleting The Node Is As Follows :\n";
    ll.display();
    cout<<"\n\n";
    system("pause");
}