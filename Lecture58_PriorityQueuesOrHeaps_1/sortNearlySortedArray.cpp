#include "iostream"
#include "queue"
#include "vector"
using namespace std;

// Sort A Nearly Sorted Array Upto K.
// Question Description : You Are Given An Array In Which All The Elements Are Maximum "K" Places Away
//                        From Their Position In The Final Sorted Array. You Have To Sort The Whole In
//                        The Minimum Time Complexity.

// Given That K Is Always Less Than The Original Size Of The vector To Be Sorted.

// Ex. {10,9,8,7,4,70,60,50} , k = 4
// Ex. {6,5,3,2,8,10,9}, k = 3;

void sortNearlySortedArray(vector<int>& v, int k){
    priority_queue<int, vector<int>, greater<>> pq;
    for (int i=0; i<=k; i++) pq.push(v[i]);
    int idx = 0;
    for (int i=k+1; i<v.size(); i++){
        v[idx++] = pq.top();
        pq.pop();
        pq.push(v[i]);
    }
    while (!pq.empty()){
        v[idx++] = pq.top();
        pq.pop();
    }
}

// T. C. On Using Heaps     : O(n * log(K))
// Best T. C. Without Heaps : O(n * log(n))  [ On Using Quick Sort ]

int main(){
    vector<int> v1 = {10,9,8,7,4,70,60,50};
    vector<int> v2 = {6,5,3,2,8,10,9};
    int k1 = 4;
    int k2 = 3;
    cout<<"\n\nThe First Vector Is : \n";
    for (int x : v1) cout<<x<<"  ";
    cout<<"\n\nThe Value Of K For The Vector Is : "<<k1;
    sortNearlySortedArray(v1, k1);
    cout<<"\n\nThe First Vector After Sorting Is : \n";
    for (int x : v1) cout<<x<<"  ";
    cout<<"\n";
    cout<<"\n\nThe Second Vector Is : \n";
    for (int x : v2) cout<<x<<"  ";
    cout<<"\n\nThe Value Of K For The Vector Is : "<<k2;
    sortNearlySortedArray(v2, k2);
    cout<<"\n\nThe Second Vector After Sorting Is : \n";
    for (int x : v2) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
}