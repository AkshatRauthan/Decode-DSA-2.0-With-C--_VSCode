#include "iostream"
#include "queue"
#include "vector"
using namespace std;

vector<int> findSmallestRange(vector<vector<int>>& v){
    if (v.empty()) return {};
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<>> pq;
    int mx = INT_MIN, start , end, k = v.size();
    for (int i=0; i<k; i++){
        pq.push({v[i][0],{i,0}});
        mx = max(mx,v[i][0]);
    }
    start = pq.top().first;
    end = mx;
    while (!pq.empty()){
        int x = pq.top().first;
        auto p = pq.top().second;
        pq.pop();
        if (mx-x < end-start){
            start = x;
            end = mx;
        }
        else if (mx-x == end-start){
            start = min(x, start);
            end = min(end, mx);
        }
        if (p.second == v[p.first].size()-1) return {start,end};
        pq.push({v[p.first][p.second+1],{p.first,p.second+1}});
        mx = max(mx,v[p.first][p.second+1]);
    }
    return {start,end};
}

int main(){
    vector<vector<int>> v = {{4,10,15,24,26},{0,9,12,20},{5,18,22,30}};
    cout<<"\n\nthe Given 2d Vector Is As Follows : \n\n";
    for (int i=0; i<v.size(); i++){
        for (int j=0; j<v[i].size(); j++) cout<<v[i][j]<<"  ";
        cout<<"\n";
    }
    vector<int> ans = findSmallestRange(v);
    cout<<"\n\nThe Smallest Range Containing At Least One Element From All The Vectors Is : \n";
    cout<<ans[0]<<" To "<<ans[1];
    cout<<"\n\n";
    system("pause");
}