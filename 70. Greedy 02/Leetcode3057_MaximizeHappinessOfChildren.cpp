#include "iostream"
#include "vector"
#include "queue"
using namespace std;

long long maximumHappinessSum(vector<int>& v, int k) {
    priority_queue<int> pq(v.begin(), v.end());
    long long ans = 0;
    for (int i=0; i<k; i++){
        v[i] = pq.top() - i;
        if (v[i] < 0) return ans;
        ans += (long long)v[i];
        pq.pop();
    }
    return ans;
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements in The Vector : \n";
    cin>>n;
    vector<int> v(n, 0);
    cout<<"\n\nEnter The "<<n<<" Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int k = 0;
    cout<<"\n\nEnter The Number Of Children To Select : \n";
    cin>>k;
    int ans = maximumHappinessSum(v, k);
    cout<<"\n\nThe Maximum Happiness After Selecting "<<k<<" Children Is : "<<ans;
    cout<<"\n\n";
    system("pause");
}