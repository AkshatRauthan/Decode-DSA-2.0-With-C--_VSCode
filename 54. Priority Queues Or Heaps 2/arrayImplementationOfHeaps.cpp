#include "iostream"
#include "vector"
using namespace std;

class minHeap{
private:
    vector<int> v;
    int idx;

public:
    minHeap(){
        idx = 0;
        v.push_back(INT_MIN);
    }
    int size(){
        return idx;
    }
      void showHeap(){
        cout<<"\n\nThe Min-Heap Is As Follows : \n";
        for (int i=1; i<=idx; i++) cout<<v[i]<<"  ";
    }
    int top(){
        return v[1];
    }
    void push(int n){
        v.push_back(n);
        idx++;
        for (int i=idx; i>0; i/=2){
            if (v[i] > v[i/2]) break;
            swap(v[i],v[i/2]);
        }
    }
    void pop(){
        if (!idx) cout<<"\n\nOops! Operation Failed\nThe Heaps Is Empty";
        v.erase(v.begin()+1);
        idx--;
        for (int i=1; i<=idx;){
            int l = 2*i, r = l+1;
            if (l > idx) break;
            else if (v[i] > v[l]){
                swap(v[i],v[l]);
                i=l;
                continue;
            }
            else if (v[i] > v[r]){
                swap(v[i],v[r]);
                i=r;
                continue;
            }
            i++;
        }
    }
};


class maxHeap{
private:
    vector<int> v;
    int idx;

public:
    maxHeap(){
        idx = 0;
        v.push_back(INT_MAX);
    }
    int size(){
        return idx;
    }
    void showHeap(){
        cout<<"\n\nThe Max-Heap Is As Follows : \n";
        for (int i=1; i<=idx; i++) cout<<v[i]<<"  ";
    }
    int top(){
        return v[1];
    }
    void push(int n){
        v.push_back(n);
        idx++;
        for (int i=idx; i>=0; i/=2){
            if (v[i] < v[i/2]) break;
            swap(v[i],v[i/2]);
        }
    }
    void pop(){
        if (!idx) cout<<"\n\nOops! Operation Failed\nThe Heaps Is Empty";
        v.erase(v.begin()+1);
        idx--;
        for (int i=1; i<=idx;){
            int l = 2*i, r = l+1;
            if (l > idx) break;
            else if (v[i] < v[l]){
                swap(v[i],v[l]);
                i=l;
                continue;
            }
            else if (v[i] < v[r]) {
                swap(v[i], v[r]);
                i=r;
                continue;
            }
            i++;
        }
    }
};

int main() {
    minHeap* pq1 = new minHeap();
    pq1->push(10);
    pq1->push(20);
    pq1->push(11);
    pq1->push(30);
    pq1->push(40);
    pq1->showHeap();
    pq1->push(12);
    pq1->push(4);
    pq1->push(7);
    pq1->push(2);
    pq1->showHeap();
    cout<<"\nSize : "<<pq1->size();
    pq1->pop();
    pq1->showHeap();
    cout<<"\nSize : "<<pq1->size();
    pq1->pop();
    pq1->showHeap();
    cout<<"\nSize : "<<pq1->size();
    cout<<"\n\n";

    maxHeap* pq = new maxHeap();
    pq->push(10);
    pq->push(20);
    pq->push(11);
    pq->push(30);
    pq->push(40);
    pq->showHeap();
    pq->push(12);
    pq->push(4);
    pq->push(7);
    pq->push(2);
    pq->showHeap();
    cout<<"\nSize : "<<pq->size();
    pq->pop();
    pq->showHeap();
    cout<<"\nSize : "<<pq->size();
    pq->pop();
    pq->showHeap();
    cout<<"\nSize : "<<pq->size();
    cout<<"\n\n";
    system("pause");
}