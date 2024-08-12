#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

// Question :- Given An Sorted Array v, Two Integers n and x. Return The k Closest Integers To x In The Array.
//             The Output Must Also Be In Sorted Order.
// Remember :- For Elements 2 And 4, And Target 3, 2 Is Always Closer To 3 Than 4.
vector<int> initialize(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector.\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Sorted Vector.\n";
    for (int i=0; i<n; i++) cin>>v[i];
    return v;
}

vector<int> findClosestElements(vector<int>& v, int target,int n) {
    vector<int> v1(n, 0);
    // If Target Is Less Than The First Element Return The First n Elements Of Vector v.
    if (target < v[0]) {
        for (int i = 0; i < n; i++) v1[i] = v[i];
        return v1;
    }
        // If Target Is Greater Than The last Element Than Return The Last n Elements Of Vector v.
    else if (target > v[v.size() - 1]) {
        for (int i = 0; i < n; i++) v1[i] = v[v.size() - n + i];
        return v1;
    }
        // If Target Is Present Between The First And The Last Index Of The Vector :-
    else {
        int hi = v.size() - 1, lo = 0, lb, up;
        // Finding The Upper And Lower Bound Element For The Target Integer.
        while (hi >= lo) {
            int mid = lo + (hi - lo) / 2;
            if (v[mid] == target) {
                lb = mid;
                up = mid + 1;
                break;
            } else if (v[mid] > target) hi = mid - 1;
            else lo = mid + 1;
        }
        // Assigning The Upper And Lower Bound Indices If The Target Is Not Present In Vector.
        if (lo > hi) {
            lb = hi;
            up = lo;
        }
        // Storing The n Closest Elements In The vector v2.
        int count = 0;
        while (count < n) {
            if (abs(v[lb] - target) <= abs(v[up] - target)) {
                v1[count] = v[lb];
                lb--;
            } else if (abs(v[lb] - target) > abs(v[up] - target)) {
                v1[count] = v[up];
                up++;
            }
            count++;
        }
        sort(v1.begin(), v1.end());
        return v1;
    }
}

int main(){
    vector<int> v = initialize();
    int n, target;
    cout<<"\nEnter The Value Of The Target Integer :\n";
    cin>>target;
    cout<<"\nEnter The Number Of Elements You Want To Find :\n";
    cin>>n;
    vector<int> v1 = findClosestElements(v,target,n);
    cout<<"\n\nThe "<<n<<" Closest Elements To Integer "<<target<<" Are As Follows :\n";
    for (int x : v1) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
}