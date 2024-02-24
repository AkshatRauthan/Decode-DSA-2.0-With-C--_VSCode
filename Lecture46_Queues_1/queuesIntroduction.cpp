#include "iostream"
#include "queue"
#include "stack"
using namespace std;

// Queue : FIFO (First In First Out)

// Elements Are Pushed At The Back And Deleted From The Front.
// Simply The Element Inserted First Will Got Deleted First.
// Therefore, In Queues Push And Pop Took Place On Its Two Opposite Ends.
// Top Function Is Replaced By Front Function.

void reverse(queue<int> &q){
    stack<int> s;
    while (!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

void display(queue<int> &q){
    cout<<endl;
    for (int i=0; i<q.size(); i++){
        cout<<q.front()<<"  ";
        q.push(q.front());
        q.pop();
    }
}

int main(){
    // Basic STL Operations On Queues.

    queue<int> q;
    q.push(0);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"\nPrinting The Front Element";
    cout<<endl<<q.front();
    // This Will Print The Element Inserted First.

    cout<<"\n\nPrinting The Rear Element.";
    cout<<endl<<q.back();
    // This Will Print The Most Recently Inserted Element.

    cout<<"\n\nPrinting The Size Of Queue.";
    cout<<endl<<q.size();

    cout<<"\n\nDeleting Element From Queue.";
    q.pop();
    cout<<endl<<"Front : "<<q.front();
    cout<<endl<<"Back  : "<<q. back();
    cout<<endl<<"Size  : "<<q.size();
    // This Will Delete The Element Inserted First Or The Front Element.

    cout<<"\n\nIs The Queue Empty.";
    cout<<endl<<q.empty();

    cout<<"\n\nPrinting A Queue.";
    display(q);

    cout<<"\n\nReversing Queue Using Stack.";
    reverse(q);
    display(q);
}