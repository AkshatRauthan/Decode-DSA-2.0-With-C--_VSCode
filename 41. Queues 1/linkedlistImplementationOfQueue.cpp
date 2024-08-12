#include "iostream"
#include "linkedlist"

class queue{
private:
    LinkedList ll;
    Node* head = ll.head;
    Node* tail = ll.tail;
    int n = 0;

public:
    void push(int element){
       ll.insertAtTail(element);
       tail = ll.tail;
       n++;
    }

    void pop(){
        if (!n) return;
        Node* temp = ll.head;
        ll.deleteHead();
        head = ll.head;
        n--;
    }

    int front(){
        if (n == 0) return INT_MIN;
        return head->val;
    }

    int back(){
        if (n == 0) return INT_MIN;
        return tail->val;
    }

    int size(){
        return n;
    }

    bool isEmpty(){
        if (!n) return true;
        return false;
    }

    void display(){
        ll.display();
    }
};

int main(){
    queue q,q1;
    q.push(0);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.display();
    cout<<"\n";
    q.pop();
    q.display();
    cout<<"\n"<<q.isEmpty();
    cout<<"\n"<<q1.isEmpty();
    cout<<"\n"<<q.size();
    cout<<"\n"<<q1.size();
    q1.display();
}