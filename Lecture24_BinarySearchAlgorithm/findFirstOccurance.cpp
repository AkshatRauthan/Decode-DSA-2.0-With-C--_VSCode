#include "iostream"
#include "vector"
using namespace std;

vector<int> initialize(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector.\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector In Increasing Order.\n";
    for (int i=0; i<n; i++) cin>>v[i];
    return v;
}

int firstOccurrence(vector<int>& v, int target){
    int low=0, hi=v.size()-1;
    while (hi >= low){
        int mid=low+(hi-low)/2;
        if (v[mid] == target) {
            if (v[mid-1] == target) hi = mid-1;
            else return mid;
        }
        else if (v[mid] > target) hi=mid-1;
        else if (v[mid] < target) low = mid+1;
    }
    return -1;
}

int main(){
    vector<int>v = initialize();
    cout<<"\nEnter The Element Whose First Occurrence You Want To Find :\n";
    int target;
    cin>>target;
    int a = firstOccurrence(v,target);
    if (a != -1) cout<<"\nThe First Occurrence Of "<<target<<"  Is At : "<<a<<"th Index.";
    else cout<<"\nThe Entered Element Is Not Present In The Given Vector.";
    cout<<"\n\n";
    system("pause");
}
