#include "iostream"
#include "queue"
using namespace std;

void removeEvenIndex(queue<int> &q){
    int n = q.size();
    for (int i=0; i<n; i++, q.pop()){
        if (i%2) q.push(q.front());
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
    int n;
    cout<<"\nEnter The Number Of Element You Want To Insert In The Queue.\n";
    cin>>n;
    queue<int> q;
    cout<<"\nEnter The Elements Of The Queue : \n";
    for (int i=0; i<n; i++){
        int temp;
        cin>>temp;
        q.push(temp);
    }
    cout<<"\nThe Input Queue Is : ";
    display(q);
    removeEvenIndex(q);
    cout<<"\n\nThe Queue After Deleting All The Elements Present At The Even Index : ";
    display(q);
}