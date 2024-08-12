#include "iostream"
#include "vector"
using namespace std;

void initialize(int num, vector<int>& v){
    cout<<"\nEnter All The Unique Elements Of The Vector : \n";
    for (int i=0; i<num; i++){
        cin>>v[i];
    }
}

// Time Complexity For All Cases : O(n * log(n))
// Space Complexity : O(log(n))
// Quick Sort Is Used In Internal Sorting Function.

void quickSort(vector<int>& v, int start, int end){
    if (start >= end) return;
    int count = 0, idx1 = (start + end)/2;
    for (int i = start; i<=end; i++) if (v[idx1] > v[i]) count++;
    int idx2 = start + count;
    swap(v[idx1],v[idx2]);
    for(int i=start,j=end; i < j;){
        if (v[i] > v[idx2] && v[j] < v[idx2]) swap(v[i++],v[j--]);
        else if (v[i] < v[idx2]) i++;
        else j--;
    }
    return quickSort(v,start,idx2-1), quickSort(v,idx2+1,end);
}

int main() {
    cout << "\nEnter The Number Of Elements Present In The Vector :\n";
    int n;
    cin>>n;
    vector<int> v(n,0);
    initialize(n,v);
    quickSort(v,0,n-1);
    cout<<"\nThe Vector After Quick Sorting Is As Follows : \n";
    for (int x : v) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
}
