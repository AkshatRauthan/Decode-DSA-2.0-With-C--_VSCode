#include "iostream"
#include "vector"
#include "queue"
#include "unordered_map"
using namespace std;

priority_queue<int, vector<int>, greater<>> right; // Minheap
priority_queue<int> left;                          // Maxheap
unordered_map<int,int> m;
int l = 0, r = 0; 

void insertElement(int ele){
    if (right.empty()){
        right.push(ele);
        r++;
    }
    else if (left.empty()){
        left.push(ele);
        l++;
    }
    else if (ele > left.top()){
        right.push(ele);
        r++;
    }
    else{
        left.push(ele);
        l++;
    }
    if (abs(l - r) == 2) balance();
}

void balance(){
    if (l > r+1){
        right.push(left.top());
        left.pop();
        l--, r++;
    }
    else if (l+1 < r) {
        left.push(right.top());
        right.pop();
        l++, r--;
    }
    else return;
}
void deleteElement(int x, int idx){
    m[x] = idx;
    while (m[left.top()]){
        m.erase(left.top());
        left.pop();
        l--;
        balance();
    }
    while (m[right.top()]){
        m.erase(right.top());
        right.pop();
        r--;
        balance();
    }
}
double findMedian(){
    if (l == r){
        return (left.top() + right.top()) / 2.0;
    }
    else if (l > r) return 1.0 * left.top();
    else return 1.0 * right.top();
}
vector<double> medianSlidingWindow(vector<int>& v, int k) {
    m.clear();
    int n = v.size();
    vector<double> ans(n-k+1,0.0);
    for (int i=0; i<k; i++){
        insertElement(v[i]);
    }
    ans[0] = findMedian();
    for (int i=1; i<n-k+1; i++){
        deleteElement(v[i-1], i-1);
        insertElement(v[i]);
        ans[i] = findMedian();
    }
    return ans;
}