#include "iostream"
using namespace std;

class Node{
public:
    int val;
    Node* next;
    explicit Node(int val, Node* next = nullptr){
        this->val = val;
        this->next = next;
    }
    Node() = default;
};

int main() {
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    cout << "\nThe Created Linked List Is As Follows :-\n";
    for (Node temp = a;  ; temp = *temp.next){
        cout<<" -> "<<temp.val;
        if (temp.next == nullptr) break;
    }
    cout << "\n\n";
    system("pause");
}
