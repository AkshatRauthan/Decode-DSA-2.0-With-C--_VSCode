#include "iostream"
#include "queue"
using namespace std;

//                                 ________Priority Queue Or Heaps________

// In Priority Queues Just Like Stacks, We Can Access Or Delete The Element That Is Present On The Top.
// But Unlike Stacks, We Cannot Directly Insert Elements To The Top Of Heap.

// Heaps Are Of Two Types :
//  i) Max Heaps :- In Max Heaps, The Maximum Element Is Always Present On The Top of The Heap.
// ii) Min Heaps :- In Min Heaps, The Minimum Element Is Always Present On The Top of The Heap.

// The Rest Of The Elements Are Present In Random Order In The Heap.
// In C++, A Max-Heap Is Initialised By Default.
// In Java, A Mn-Heap Is Initialised By Default.

// Time Complexity :
// Deleting ( pq.pop() )     : O(log(n))
// Inserting ( pq.insert() ) : O(log(n))
// Retrieving ( pq.top() )   : O(1)

int main(){
    priority_queue<int> pqMax;     // Max Heap
    pqMax.push(1);
    pqMax.push(-15);
    pqMax.push(3);
    pqMax.push(10);
    pqMax.push(-5);
    pqMax.push(7);
    cout<<"\n";
    cout<<"Max Heap : \n";
    cout<<pqMax.top();             // 10
    pqMax.pop();                   // 10 Removed.
    cout<<"\n";
    cout<<pqMax.top();             // 7

    priority_queue<int, vector<int>, greater<> > pqMin;
    pqMin.push(1);
    pqMin.push(-15);
    pqMin.push(3);
    pqMin.push(10);
    pqMin.push(-5);
    pqMin.push(7);
    cout<<"\n";
    cout<<"Min Heap : \n";
    cout<<pqMin.top();             // -15
    pqMin.pop();                   // -15 Removed.
    cout<<"\n";
    cout<<pqMin.top();             // -5
    cout<<"\n\n";
    system("pause");
}