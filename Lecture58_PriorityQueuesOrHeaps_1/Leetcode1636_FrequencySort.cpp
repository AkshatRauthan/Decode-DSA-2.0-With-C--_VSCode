#include "iostream"
#include "queue"
#include "vector"
#include "unordered_map"
using namespace std;

vector<int> frequencySort(vector<int>& v){
    unordered_map<int,int> m;
    for (int ele : v) m[ele]++;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
    for (auto p : m) pq.push({p.second,p.first});
    for (int i=0; i<v.size(); pq.pop()){
        for (int j=0; j<pq.top().first; j++) v[i++] = pq.top().second;
    }
    return v;
}

int main(){

}