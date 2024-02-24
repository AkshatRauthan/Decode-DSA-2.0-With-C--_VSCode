#include "iostream"
#include "doublyLinkedLists"

class deque{
private:
    doublyLinkedList ll;
    doubleNode* Front = ll.head;
    doubleNode* Back  = ll.tail;
    int n = 0;
public:
    deque() = default;

    doubleNode* front(){
        return Front;
    }

    doubleNode* back(){
        return Back;
    }

    int size(){
        return n;
    }

    void push_front(int val){
        ll.insertAtHead(val);
        Front = ll.head;
        n++;
    }

    void push_back(int val){
        ll.insertAtTail(val);
        Back = ll.tail;
        n++;
    }

    void pop_front(){
        if (!n) return;
        ll.deleteHead();
        Front = ll.head;
        n--;
    }

    void pop_back(){
        if (!n) return;
        ll.deleteTail();
        Back = ll.tail;
        n--;
    }

    void display(){
        if (!n) return;
        for(doubleNode* temp = ll.head; temp != nullptr; temp = temp->next) cout<<temp->val<<"  ";
    }
    void displayReverse(){
        if (!n) return;
        for(doubleNode* temp = ll.tail; temp != nullptr; temp = temp->pre) cout<<temp->val<<"  ";
    }
};

int main(){
    deque q;
    q.push_back(50);
    q.push_back(60);
    q.push_front(30);
    q.push_front(20);
    q.display();
    cout<<endl;
    q.displayReverse();
    q.pop_back();
    cout<<endl;
    q.display();
    cout<<endl;
    q.pop_front();
    q.display();
}