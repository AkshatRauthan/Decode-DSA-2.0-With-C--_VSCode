#include "iostream"
#include "linkedlist"
LinkedList l1;

void rotateList(Node* head, int k){
    if (head == nullptr || head->next == nullptr) return;
    int len = 0;
    for (Node* temp = head; temp != nullptr; temp = temp->next) len++;
    k %= len;
    if (k == 0) return;
    Node* start = head;
    Node* end = head;
    for (int i=1; i<k; i++) end = end->next;
    while (end->next->next != nullptr){
        end = end->next;
        start = start->next;
    }
    Node* temp = start;
    start = start->next;
    end = end->next;
    temp->next = nullptr;
    end->next = head;
    l1.head = start;
}

int main(){
    initializeLinkedList(l1);
    cout<<"\nThe Entered Linked List Is : \n";
    l1.display();
    int n;
    cout<<"\nEnter The Number Of Steps By Which You Want To Rotate The List : \n";
    cin>>n;
    rotateList(l1.head, n);
    cout<<"\nThe Linked List After Rotation By "<<n<<" Steps Is : \n";
    l1.display();
    cout<<"\n\n";
    system("pause");
}