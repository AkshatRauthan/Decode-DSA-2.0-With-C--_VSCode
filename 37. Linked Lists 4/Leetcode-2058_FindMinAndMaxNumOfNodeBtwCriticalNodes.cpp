// Leetcode 2058 : Find Minimum And Maximum Number Of Nodes Present Between Critical Nodes.

// Critical Node Is A Node Greater Or Less Than Both Its Previous and Next Node.
// Return A Vector Containing The Minimum Number Of Node As First Element And Maximum Number Of Nodes As
// Second Element.

#include "iostream"
#include "linkedlist"
#include "vector"
using namespace std;

vector<int> &minAndMaxNumber(Node* head){
    vector<int> final(2,0);
    cout<<"\n"<<&final;
    return final;
}

int main(){
    LinkedList ll;
    initializeLinkedList(ll);
    vector<int> final;
    final = minAndMaxNumber(ll.head);
    cout<<"\n"<<&final;
}