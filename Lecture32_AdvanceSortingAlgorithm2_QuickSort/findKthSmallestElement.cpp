#include "iostream"
#include "vector"
using namespace std;

void initialize(int num, vector<int>& v){
    cout<<"\nEnter All The Unique Elements Of The Vector : \n";
    for (int i=0; i<num; i++){
        cin>>v[i];
    }
}

// Time Complexity : O(n)

int quickSearch(vector<int>& v, int start, int end, int target_idx){
    if (start >= end) return -1;
    int count = 0, idx1 = (start + end)/2;
    for (int i = start; i<=end; i++) if (v[idx1] > v[i]) count++;
    int idx2 = start + count;
    swap(v[idx1],v[idx2]);
    for(int i=start,j=end; i < j;){
        if (v[i] > v[idx2] && v[j] < v[idx2]) swap(v[i++],v[j--]);
        else if (v[i] < v[idx2]) i++;
        else j--;
    }
    if (idx2 == target_idx) return idx2;
    else if (idx2 > target_idx) return quickSearch(v, start, idx2, target_idx);
    else return quickSearch(v, idx2, end, target_idx);
}

int main() {
    cout << "\nEnter The Number Of Elements Present In The Vector :\n";
    int n;
    cin>>n;
    vector<int> v(n,0);
    initialize(n,v);
    cout<<"\nEnter The Value Of k :\n";
    int k;
    cin>>k;
    int target = quickSearch(v,0,n-1, k-1);
    cout<<"\nThe "<<k<<"th Smallest Element In The Given Vector Is : "<<v[target];
    cout<<"\n\n";
    system("pause");
}
