#include "iostream"
#include "vector"
using namespace std;

// Given A Vector Of Size n. You have To Return The Sub-set Of The Vector Having The Highest Sum.
// Remember That Sub-arrays Are Continuous Part Of A Vector.
// Hint : currentSum = previousSum - First Element Of previousWindow + Last Element Of currentWindow
int idx = 0;
void maxSumSubArray(vector<int> &v, int k){
    int sum = 0, maxSum = INT_MIN;
    for (int i=0; i<k; i++) sum += v[i];
    for (int i=0, j=k-1; j<v.size(); i++, j++){
        sum += v[j] - v[i-1];
        if (sum > maxSum) {
            maxSum = sum;
            idx = i;
        }
    }
}

int main(){
    int n,k;
    cout<<"\nEnter The Number Of Elements In The Vector : \n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector : \n";
    for (int i=0;i<n;i++) cin>>v[i];
    cout<<"\nEnter The Size Of The Required Sub-vector : \n";
    cin>>k;
    maxSumSubArray(v, k);
    cout<<"\nThe Sub-Array Of Size"<<k<<" With The Highest Sum Is As Follows :\n";
    for (int i=idx; i<idx+k ;i++) cout<<v[i]<<"  ";
    cout<<"\n\n";
    system("pause");
}