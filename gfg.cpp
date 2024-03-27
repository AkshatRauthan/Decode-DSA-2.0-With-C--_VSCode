#include "iostream"
#include "vector"
#include "linkedlist"
using namespace std;

vector<int> removeZeroSumSublists(Node* head){
    if (!head) return {};
    vector<int> v;
    for (Node* temp = head; head; head = head->next) v.push_back(temp->val);
    cout<<"\n\n";
    for (auto x : v) cout<<x<<"  ";
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    LinkedList l;
    initializeLinkedList(l);
    removeZeroSumSublists(l.head);
    cout<<"\n\n";
    system("pause");
}