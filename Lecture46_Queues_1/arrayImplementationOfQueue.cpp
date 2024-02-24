#include "iostream"
#include "vector"
using namespace std;

class queue{
private:
   vector<int> arr;
   int head;
   int tail;

public:
    queue(int n){
        arr = *new vector<int>(n , 0);
        head = 0;
        tail = 0;
    }

    void push(int element){
        if (!(tail - head)) arr[0] = element;
        else arr[++tail] = element;
    }

    void pop(){
        if (!(tail-head)) return;
        head++;
    }

    int front(){
        if (!(tail-head)) return arr[head];
        return INT_MIN;
    }

    int back(){
        if (!(tail-head)) return arr[tail];
        return INT_MIN;
    }

    int size(){
      return tail-head;
    }

    bool isEmpty(){
        return !(tail-head);
    }

    void display(){
       if (tail-head) for (int i=head; i<=tail; i++) cout<<arr[i]<<"  ";
    }
};

int main(){
    queue q(20),q1(10);
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