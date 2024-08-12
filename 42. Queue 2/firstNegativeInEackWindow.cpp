#include "iostream"
#include "queue"
#include "vector"
using namespace std;

void display(queue<int> &q){
    for (int i=0; i<q.size(); i++){
        cout<<q.front()<<"  ";
        q.push(q.front());
        q.pop();
    }
}

queue<int> firstNegativeInWindow(vector<int>& v, int k){
    queue<int> q;
    int start = 0, end = k-1;
    int idx = 0;
    for (int i=0; i<k; i++) if (v[i] < 0) {
        idx = i;
        break;
    } q.push(v[idx]);
    start++;
    end++;
    while (end != v.size()){
        if (idx >= start) q.push(v[idx]);
        else {
            for (int i=start; i<=end; i++) {
                if (v[i] < 0){
                    idx = i;
                    q.push(v[idx]);
                    break;
                }
                else if (i == end) q.push(0);
            }
        }
        start++;
        end++;
    }
    return q;
}

int main(){
    int n, k;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector.\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    cout<<"\nEnter The Size Of The Window : \n";
    cin>>k;
    queue<int> q = firstNegativeInWindow(v,k);
    cout<<"\nThe First Negative Number Of Each Window Of Size "<<k<<" Is As Follows : \n";
    display(q);
    cout<<"\n\n";
    system("pause");
}