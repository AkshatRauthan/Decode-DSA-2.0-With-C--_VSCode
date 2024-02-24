#include "iostream"
#include "linkedlist"
#include "vector"
using namespace std;

vector<Node*> splitInParts(int k, Node* head){
    int size = 0;
    for(Node* temp = head; temp != nullptr; temp = temp->next, size++);
    vector<Node *> final(k);
    if (size >= k) {
        int n = size / k, x, size1 = size;
        x = size - k * n;
        int idx = 0;
        while (size > 0 && head != nullptr) {
            Node *temp = head;
            Node *temp2;
            for (int j = 1; j < n; j++) head = head->next;
            size -= n;
            if (x > 0) {
                head = head->next;
                size--;
                x--;
            }
            temp2 = head;
            head = head->next;
            temp2->next = nullptr;
            final[idx++] = temp;
        }
        cout << "\n" << size << "\n";
        while (size1 != k && n == 1 && idx != k) {
            final[idx++] = nullptr;
            k--;
        }
    } else {
        int idx = 0;
        Node* temp = head;
        Node* temp2 = temp;
        while (temp != nullptr){
            temp2 = temp;
            temp = temp->next;
            temp2->next = nullptr;
            final[idx++] = temp2;
        }
        while(idx < k) final[idx++] = nullptr;
    }
    return final;
}

int main(){
    LinkedList ll;
    initializeLinkedList(ll);
    int n;
    cout<<"\nEnter The Number Of Parts Into Which You Want To Split Your Linked List : \n";
    cin>>n;
    vector<Node*> final = splitInParts(n, ll.head);
    cout<<"\nFunction Executed Successfully\n";
    cout<<"\nThe Split Linked List Is As Follows :\n";
    for (Node* node : final){
        LinkedList t;
        t.head = node;
        if (t.head == nullptr) {
            cout << "\n";
            continue;
        }
        t.display();
        cout<<endl;
    }
    cout<<"Size Of The Final Vector Is : "<<final.size()<<"\n\n";
    system("pause");
}