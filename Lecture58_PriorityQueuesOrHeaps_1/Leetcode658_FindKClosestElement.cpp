#include "iostream"
#include "queue"
#include "vector"
#include "unordered_map"
#include "algorithm"
#include "set"
using namespace std;

// Given A Vector v. Return K Closest Element To X From It.

vector<int> findClosestElements(vector<int>& v,int k, int x){
    int n = v.size();
    unordered_map<int,int> m;
    for (int i=0; i<n; i++){
        m[abs(v[i]-x)] = i;
    }
    priority_queue<pair<int,int>> pq;
    for (auto p : m){
        pq.push({p.first, v[p.second]});
        if (pq.size() > k) pq.pop();
        m.erase(p.first);
    }
    set<int> s;
    for (int i=0; i<n; i++){
        m[v[i]]++;
        s.insert(v[i]);
    }
    int i=0;
    vector<int> ans(k);
    for (int a : s){
        for (int j=0; j<m[a]; j++,i++){
            if (i == k) break;
            ans[i] = a;
        }
    }
    return ans;
}