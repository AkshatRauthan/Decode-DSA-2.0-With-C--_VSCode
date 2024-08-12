#include "iostream"
#include "vector"
using namespace std;

// Question :- Given An Integer n, Return True If It Can Be Expressed As The Sum Of Squares Of Two Integers.

vector<int> judgeSumOfSquares(int n){
    vector<int> v(3,-1);
    v[0] = false;
    int lo=0, hi=n;
    while (lo <= hi){
        if (hi+lo == n){
            v[0] = true;
            v[1] = lo;
            v[2] = hi;
            return v;
        }
    }
    return v;
}

int main(){
    int n;
    cout<<"\nEnter The Number You Want To Check For The Given Condition :-\n";
    cin>>n;
    vector<int>v = judgeSumOfSquares(n);
}
