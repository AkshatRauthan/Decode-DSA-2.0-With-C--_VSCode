#include "iostream"
#include "vector"
using namespace std;

void heapifyIntoMinHeap(vector<int>& v){
    for (int i=1; i<=v.size()/2; i++){
        int l = 2*i, r = l+1;
        if (l > v.size()) continue;
        else if (v[i] > v[l]) swap(v[i],v[l]);
        else if (v[i] > v[r]) swap(v[i],v[r]);
        continue;
    }
}

void heapifyIntoMaxHeap(vector<int>& v){
    for (int i=v.size()/2; i>=1; i--){
        int l = 2*i, r = l+1;
        if (l > v.size()) continue;
        if (r >= v.size()){
            if (v[l] > v[i]) swap(v[i],v[l]);
            continue;
        }
        if (v[l] > v[i] && v[r] > v[i]){
            if (v[l] < v[r]) swap(v[l],v[r]);
            swap(v[l],v[i]);
            continue;
        }
        if (v[l] > v[i] || v[r] > v[i]){
            if (v[l] > v[i]) swap(v[l],v[i]);
            else swap(v[r],v[i]);
            continue;
        }
        continue;
    }
}

int main(){
    vector<int> v = {INT_MIN,30,2,10,11,20,40,7,12};
    heapifyIntoMinHeap(v);
    cout<<"\n\nThe Vector After Converting Into A Min-Heap Is As Follows :\n";
    for (int i=1; i<v.size(); i++) cout<<v[i]<<"  ";
    heapifyIntoMaxHeap(v);
    cout<<"\n\nThe Vector After Converting Into A Max-Heap Is As Follows :\n";
    for (int i=1; i<v.size(); i++) cout<<v[i]<<"  ";
    cout<<"\n\n";
    system("pause");
}