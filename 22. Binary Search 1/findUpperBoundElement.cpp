#include "iostream"
#include "vector"
using namespace std;

int upperBound(vector<int>& v, int target){
    int lo=0, hi=v.size()-1, mid;
    while (lo <= hi){
        mid = lo+(hi-lo)/2;
        if (v[mid] == target) return v[mid+1];
        else if (v[mid] > target) hi=mid-1;
        else lo=mid+1;
    }
    return v[lo];
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector.\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector In Increasing Order.\n";
    for (int i=0; i<n; i++) cin>>v[i];
    cout<<"\nEnter The Element For Which You Want To Find The Upper Bound Element:\n";
    int target;
    cin>>target;
    int a = upperBound(v,target);
    cout<<"\nThe Upper Bound For "<<target<<"  Is : "<<a;
    cout<<"\n\n";
    system("pause");
}