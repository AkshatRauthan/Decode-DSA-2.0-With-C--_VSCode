#include "iostream"
#include "vector"
using namespace std;

// A Mountain Array Is An Array In Which Elements Are First Placed In Increasing Order
// And Then In Decreasing Order.
// For Ex. ==> [ 1, 3, 5, 6, 14, 18, 15, 11, 7, 4, 2, 0]
// Question : Here We Are Given A Mountain Vector. Return The Index Of The Highest Element Of The Vector.

int peakIndexInMountainArray(vector<int>& v){
    int lo=0, hi=v.size()-1, mid;
    while (hi >= lo){
        mid = lo+(hi-lo)/2;
        if (v[mid] > v[mid-1] && v[mid] > v[mid+1]) return mid;
        else if (v[mid] < v[mid+1]) lo = mid+1;
        else if (v[mid] < v[mid-1]) hi= mid-1;
    }
    return lo;
}

vector<int> initialize(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector.\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Mountain Vector.\n";
    for (int i=0; i<n; i++) cin>>v[i];
    return v;
}

int main(){
    vector<int> v = initialize();
    int idx = peakIndexInMountainArray(v);
    cout<<"\nThe The Largest Element Of The Given Mountain Vector Is : "<<v[idx];
    cout<<"\nThe Index Of The Largest Element Of The Given Mountain Vector Is : "<<idx;
    cout<<"\n\n";
    system("pause");
    return 0;
}