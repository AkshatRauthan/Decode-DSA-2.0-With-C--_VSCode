#include "iostream"
#include "unordered_map"
#include "vector"
using namespace std;

vector<int> searchRange(vector<int>& v, int x) {
    int idx = -1, i=0, j=v.size()-1;
    int mid = i+(j-i)/2;
    while (i <= j){
        if (v[mid] == x){
            idx = mid;
            int a = idx, b = idx;
            while (a >= 1 ||v[a-1] == x) a--;
            while (b <= v.size()-2|| v[b+1] == x) b++;
            return {a,b};
        }
        else if (v[mid] > x) i = mid + 1;
        else j = mid - 1;
    }
    return {-1,-1};
}

int main(){
    vector<int> v = {5,7,7,8,8,10};
    vector<int> a = searchRange(v, 8);
    cout<<"\nThe Value of The Function Is : "<<a[0]<<"  "<<a[1];
    cout<<"\n\n";
    system("pause");
}