#include "iostream"
#include "stack"
#include "vector"
using namespace std;
// For Some Days The Stock Price Of A Stock Is Given In The Input.
// In The Output Return The Number Of Days For Which The Given Price Is The Highest Price Of The Stock
// Continuously.

// Ex. Input ==> { 100, 80, 60, 70, 60, 75, 85}
//    Output ==> {   1,  1,  1,  2,  1,  4,  6}

void calculateStockSpan(vector<int>& v, vector<int>& ans){
    stack<int> st;
    st.push(0);
    for (int i=1; i<v.size(); i++){
        while (st.size() != 0 && v[i] > v[st.top()]) st.pop();
        if (st.size() != 0) ans[i] = i-st.top();
        st.push(i);
    }
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Days For Which You Have The Data :\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Prices For "<<n<<" Days :\n";
    for (int i=0; i<n; i++) cin>>v[i];
    vector<int> ans(n,1);
    calculateStockSpan(v, ans);
    cout<<"\nThe Entered Stock Prices Are : \n";
    for (int x : v) cout<<x<<"  ";
    cout<<"\n\nThe Respective Spans For Which The Given Prices Were Highest Are : \n";
    for (int x : ans) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
}
