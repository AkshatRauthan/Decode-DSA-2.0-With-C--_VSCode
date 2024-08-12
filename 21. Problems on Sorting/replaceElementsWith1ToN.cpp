#include "iostream"
#include "vector"
using namespace std;

// Given An Array With N Distinct Elements Convert The Given Array To A Form Where
// All Elements Are in Range From 1 To N. The Order Of Elements Is The Same.
// i.e. 0 Is Placed In The Place Of The Smallest Element, 1 Is Placed For The Second Minimum Element, ...
// ..... N-1 Is Placed For The Largest Element.

// Sample Input :-  19, 12, 23, 8, 16
// Desired Output :-  3, 1, 4, 0, 2

vector<int> initialize(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector.\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector.\n";
    for (int i=0; i<n; i++) cin>>v[i];
    return v;
}

vector<int> replaceElements(vector <int>& v){
    vector<int> v1(v.size(),0);
    for (int i=0; i<v.size(); i++){
        int min = INT_MAX, min_idx = -1;
        for (int j=0; j<v1.size(); j++){
            if (v1[j] == 1) continue;
            else if (v[j] < min){
                min = v[j];
                min_idx = j;
            }
        }
        v[min_idx] = i;
        v1[min_idx] = 1;
    }
    return v;
}

int main(){
    vector <int> v;
    v = initialize();
    replaceElements(v);
    cout<<"\nThe Vector After The Required Changes Is As Follows : \n";
    for (int i=0; i<v.size(); i++) cout<<v[i]<< "  ";
    cout<<"\n\n";
    system("pause");
}