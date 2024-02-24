#include "iostream"
using namespace std;
int main(){
    float x, y;
    cout<<"Enter The Unit Cost Of The Product :\n";
    cin>>x;
    cout<<"Enter The Selling Price Of The Product :\n";
    cin>>y;
    if (x == y) cout << "No Profit, No Loss Incurred\n";
    else {
        int z;
        cout << "Enter The Number Of Units Sold By :\n";
        cin >> z;
        if (x < y) cout << "The Seller Has Incurred A Net Profit Of " << (float) z * (y - x) << "\n";
        else cout << "The Seller Has Incurred A Net Loss Of " << (float) z * (x - y) << "\n";
    }
}