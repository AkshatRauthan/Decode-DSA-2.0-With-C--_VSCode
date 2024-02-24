#include "iostream"
#include "queue"
#include "unordered_map"
#include "vector"
using namespace std;

vector<int> topKFrequent(vector<int>& v, int k){
    vector<int> ans(k);
    unordered_map<int,int> m;
    for (int ele : v) m[ele]++;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
    // For Priority Queues With Pair Datatype, Max Or Min Are Calculated On The Basis Of First
    // Value Of Respective The Pair Class And Then The Second Element.
    for (auto p : m){
        pq.push({p.second, p.first});
        if (pq.size() > k) pq.pop();
    }
    for (int i=0; i<k; i++, pq.pop()) ans[i] = pq.top().second;
    return ans;
}

int main(){
    cout<<"\n\nEnter The Size Of The Vector : \n";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    cout<<"\n\nEnter The Value Of K : \n";
    int k;
    cin>>k;
    vector<int> ans = topKFrequent(v,k);
    cout<<"\n\nThe Top "<<k<<" Frequent Elements Of The Given Vector Are : \n";
    for (int x : ans) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
}