#include "iostream"
#include "vector"
using namespace std;

//                                   _______ QUICK SORT _______
// Take The First Element As The Pivot Element.
// Search For Number Of Elements Smaller Than Pivot : n.
// Swap Pivot With The Element At The nth Index.
// Place All The Elements Smaller Than Pivot On Left Side And The One Greater On Right Side.
// Now, Again Perform The Same Tasks By Taking All The Elements Before And After Pivot As Two Separate Vectors.
// Return The Function When One Or No Element Is Left In The Passed Vector.

// Average Case Time Complexity : O(n * log(n))
// Worst Case Time Complexity : O(n*n)
// Space Complexity : O(log(n))

void initialize(int num, vector<int>& v){
    cout<<"\nEnter All The Unique Elements Of The Vector : \n";
    for (int i=0; i<num; i++){
        cin>>v[i];
    }
}

void quickSort(vector<int>& v, int start, int end){
    if (start >= end) return;
    int count = 0;
    for (int i = start; i<=end; i++) if (v[start] > v[i]) count++;
    int idx = start + count;
    swap(v[start],v[idx]);
    for(int i=start,j=end; i < j;){
        if (v[i] > v[idx] && v[j] < v[idx]) swap(v[i++],v[j--]);
        else if (v[i] < v[idx]) i++;
        else j--;
    }
    return quickSort(v,start,idx-1), quickSort(v,idx+1,end);
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