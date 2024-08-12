#include "iostream"
#include "deque"
using namespace std;

// Deque :- Doubly Ended Queue
// As The Name Suggest In A Deque We Can Perform All The Operations From The Front As Well As The Back.

int main(){
    deque<int> q;
    q.push_back(20);
    q.push_front(10);
    // q = 10 20
    q.pop_back();
    // q = 10;
    q.push_back(20);
    // q = 10 20
    q.pop_front();
    // q = 20
}