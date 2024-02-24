#include "iostream"
#include "vector"
using namespace std;
void sortArr(vector<int> &nums) {
    int hi=nums.size()-1,mid=0,low=0;
    while (mid<=hi){
        if (nums[mid] == 2){
            nums[mid] = nums[hi];
            nums[hi] = 2;
            hi--;
        }
        else if (nums[mid] == 0){
            nums[mid]=nums[low];
            nums[low] = 0;
            low++;
            mid++;
        }
        else mid++;
    }
}
void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "  ";
    }
    cout << endl;
}
int main(){
    vector<int> v;
    v.push_back(1);v.push_back(2);v.push_back(0);v.push_back(1);v.push_back(1);v.push_back(0);
    v.push_back(1);v.push_back(0);v.push_back(2);v.push_back(2);v.push_back(0);v.push_back(1);
    cout << "\nThe Given Array Is :\n";
    display(v);
    cout << "\n\nThe Sorted Array Is :\n" ;
    sortArr(v);
    display(v);
    system("pause");
}