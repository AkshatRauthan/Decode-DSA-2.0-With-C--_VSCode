#include "iostream"
#include "vector"
#include "queue"
using namespace std;

int kthSmallestOptimised(vector<int>& v, int k){
    priority_queue<int> pq;
    for (int i=0; i<v.size(); i++){
        pq.push(v[i]);
        if (pq.size() > k) pq.pop();
    }
    return pq.top();
}

// Explanation :
// Push All The Elements Of The Vector Into The Max Heap.
// Whenever The Size Of Heap Exceeds K Then Pop The Top.
// This Will Pop The Top Element And There Are K Elements Left.
// The Deleted Element Is Greater Than The K Elements Therefore It Cannot Be The Answer.
// The Top Element Left At The End Is The Answer.

// In The above Algorithm All The Smallest K Element Are Left Inside The Heap At The End And All The
// Greater Elements Will Come On Top And Be Deleted.
// Because The Size Of The Heap Cannot Be Greater Than K, We Will Be Left With The K Smallest Elements
// In The End.
// And Their Top Element Will Be The Kth Smallest As It Will Be Greater Than The Remaining K-1 Elements.

int kthSmallest(vector<int>& v, int k){
    priority_queue<int, vector<int>, greater<>> pq;
    for (int x : v) pq.push(x);
    for (int i=1; i<k; i++) pq.pop();
    return pq.top();
}
int main(){
    int n;
    cout<<"\n\nEnter The Number Of Elements Present In The Vector : \n";
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnter The "<<n<<" Elements of THE Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    int k;
    cout<<"\n\nEnter The Value Of K : \n";
    cin>>k;
    if (k>n || k<0) cout<<"\n\nInvalid Value Of K Inserted.";
    else cout<<"\n\nThe "<<k<<"th Smallest Element Is : "<<kthSmallestOptimised(v,k);
    cout<<"\n\n";
    system("pause");
}
