#include "iostream"
#include "queue"
#include "stack"
using namespace std;

void reverseElements(queue<int>& q, int n){
    stack<int> st;
    queue<int> temp;
    for (int i=0; i<n; i++){
        st.push(q.front());
        q.pop();
    }
    while (!q.empty()){
        temp.push(q.front());
        q.pop();
    }
    while (!st.empty()){
        q.push(st.top());
        st.pop();
    }
    while (!temp.empty()){
        q.push(temp.front());
        temp.pop();
    }
    delete &temp;
    delete &st;
}

void display(queue<int> &q){
    for (int i=0; i<q.size(); i++){
        cout<<q.front()<<"  ";
        q.push(q.front());
        q.pop();
    }
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Queue : \n";
    cin>>n;
    queue<int> q;
    cout<<"\nEnter The "<<n<<" Elements Of The Queue.\n";
    for (int i=0, temp; i<n; i++) {
        cin>>temp;
        q.push(temp);
    }
    cout<<"\nThe Entered Queue Is : \n";
    display(q);
    cout<<"\nEnter The Number Of Elements You Want To Reverse.\n";
    cin>>n;
    if (n > q.size()){
        cout<<"\nOops! The Entered Value Exceeds The Size Of The Queue";
        return 0;
    }
    reverseElements(q,n);
    cout<<"\nThe Queue After Reversal Of The First "<<n<<" Elements Are : \n";
    display(q);
    cout<<"\n\n";
    system("pause");
}