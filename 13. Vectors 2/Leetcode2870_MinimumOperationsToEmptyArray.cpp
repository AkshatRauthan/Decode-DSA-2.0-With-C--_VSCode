#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
int minOperations(vector<int>& v) {
    sort(v.begin(),v.end());
    int ans = 0;
    for (int i=0; i<v.size();i++){
        int count = 1;
        while (i<v.size()-1 && v[i] == v[i+1]){
            count++;
            i++;
        }
        int x = count%3;
        if (x == 0) ans += count/3;
        else if (x == 1){
            if (count == 1) return -1;
            else if (count == 4) ans += 2;
            else {
                ans += (count+2)/3;
            }
        }
        else if (x == 2) ans += (count+1)/3;
    }
    return ans;
}
int main(){
    cout<<"\nEnter The Number Of Elements Present In The Vector : \n";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Values Of The Vector : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    cout<<"\n\nThe Vector After Sorting Is : \n";
    for (int ele : v) cout<<ele<<"  ";
    cout<<"\n\n";
    int ans = minOperations(v);
    cout<<"\nThe Minimum Number Of Operations Are : "<<ans<<"\n\n";
    system("pause");
}