#include "iostream"
#include "queue"
#include "vector"
using namespace std;

int minimumCost(vector<int>& v){
    priority_queue<int, vector<int>, greater<>> pq;
    for (int i=0; i<v.size(); i++) pq.push(v[i]);
    int cost = 0;
    while (pq.size() > 1){
        int temp = pq.top();
        pq.pop();
        temp += pq.top();
        pq.pop();
        cost += temp;
        pq.push(temp);
    }
    return cost;
}

int main(){
    vector<int> v = {2,7,4,1,8};
    cout<<minimumCost(v);
    cout<<"\n\n";
    system("pause");
}