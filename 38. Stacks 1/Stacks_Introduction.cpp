#include "iostream"
#include "stack"
using namespace std;

//             __________________________  ||  Stacks  ||  __________________________

//  a) Elements Can Only Be Inserted On The Top Of Stack.
//  b) At One Time, Only The Top-Most Element Of The Stack Can Be Accessed.
//  c) Deletion Of Element Can Only Take Place With The Top-Most Element.

// Due To Their Nature Stacks Are Also Called LIFO Or FILO :-
// Last In First Out : As The Last Inserted Element Is The One Which Is Accessed First.
// First In Last Out : As The First Inserted Element Is The One Which Is Accessed Last.

// There Are Three Operations That Can Be Performed On Stacks :-
// a) stack.push(x) --> To Insert A Variable x On The Top Of The Stack.
// b) stack.pop()   --> To Delete The Top-Most Element Of The Stack.
// c) stack.top()   --> To  Fetch The Top-Most Element Of The Stack.

// Difference Between Stacks And Linked List :-

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<"\n";
    st.pop();
    cout<<st.size()<<"\n";
    cout<<st.top()<<"\n";
}