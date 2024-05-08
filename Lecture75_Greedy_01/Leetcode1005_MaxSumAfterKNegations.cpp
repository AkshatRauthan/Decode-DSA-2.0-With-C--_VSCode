#include "iostream"
#include "vector"
#include "queue"
using namespace std;

int largestSumAfterKNegations(vector<int>& v, int k) {
    int sum = 0;
    for (auto ele : v) sum += ele;
    priority_queue<int, vector<int>, greater<int>> pq(v.begin(), v.end());    
    // Direct Conversion Of Array Into Priority Queue Only Took O(n) Operations.
    while (k>0 && pq.top()<0) {
        int mn = pq.top();
        sum -= 2 * mn;
        pq.pop();
        if (-mn > -pq.top())
            pq.push(-mn);
        k--;
    }
    if (k%2) sum -= 2*pq.top(); 
    return sum;
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Elemnets Of The Vector : \n";
    cin>>n;
    vector<int> v(n,0);
    cout<<"\n\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int k;
    cout<<"\n\nEnter The Number Of The Negations : \n";
    cin>>k;
    int sum = largestSumAfterKNegations(v, k);
    cout<<"\n\nThe Maximum Sum Obtained After "<<k<<" Negations Is : "<<sum;
    cout<<"\n\n";
    system("pause");
}
