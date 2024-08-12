#include "iostream"
#include "vector"
using namespace std;

int smallestMissingNumber(vector<int>& v){
    int lo=0, hi=v.size()-1, mid, min=0, flag=0;
    while (lo <= hi){
        mid = lo+(hi-lo)/2;
        if (v[mid] != mid) {
            min=mid;
            flag = 1;
        }
        if (v[mid] > mid) hi=mid-1;
        else lo=mid+1;
    }
    if (flag) return min;
    return -1;
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector.\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector In Increasing Order.\n";
    for (int i=0; i<n; i++) cin>>v[i];
    int a = smallestMissingNumber(v);
    if (a!=-1)cout<<"\nThe Smallest Missing Non-Negative Element In The Given Vector Is : "<<a;
    else cout<<"\nOops! No Non-Negative Element Is Missing In the Given Vector.";
    cout<<"\n\n";
    system("pause");
}