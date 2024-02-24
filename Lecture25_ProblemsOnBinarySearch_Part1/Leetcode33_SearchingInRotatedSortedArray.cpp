#include "iostream"
#include "vector"
using namespace std;

// Question :- You Are Given A Rotated Sorted Array And You Have To Search The Given Target Element In It.
//             Return The Index Of The Target Element Assuming That The Array Contains Only Unique Elements.

vector<int> initialize(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector.\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Rotated Sorted Vector.\n";
    for (int i=0; i<n; i++) cin>>v[i];
    return v;
}

int searchInRotatedSortedArray(vector<int>& v,int target){
    int lo=0, hi=v.size()-1, mid, pivot;

    // Finding Pivot Element :- Here Pivot Will Always Be The Largest Element Of The Vector.
    // Also This Vector Will Acts As A Mountain Array.
    while (lo <= hi){
        mid = lo+(hi-lo)/2;
        if (v[mid] > v[mid-1] && v[mid] > v[mid+1]){
            pivot = mid;
            break;
        } else if (v[mid] > )
    }
}

int main(){
    vector<int> v = initialize();
    int target;
    cout<<"\nEnter The Target Element You Want To Find In The Array.";
    cin>>target;
    int idx = searchInRotatedSortedArray(v,target);
    if (idx != -1) cout<<"\nThe Index Of The Target Element In The Given Vector Is : "<<idx;
    else cout<<"\nOops! The Target Element Is Not Present In The Given Vector.";
    cout<<"\n\n";
    system("pause");
    return 0;
}