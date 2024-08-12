#include "iostream"
using namespace std;

// Calculate The Integral Part Of Square-Root Of A Number.

int sqrt(int x){
    int hi=x, lo=1;
    while (lo <= hi){
        int mid = lo+(hi-lo)/2;
        if (x == mid*mid) return mid;
        else if (x < mid*mid) hi=mid-1;
        else lo=mid+1;
    }
    return hi;
}

int main(){
    cout<<"\nEnter The Number Whose Square-Root You Want To Calculate :\n";
    int x;
    cin>>x;
    int y = sqrt(x);
    cout<<"\nThe Integral Part Of Square-Root Of "<<x<<" Is : "<<y;
    cout<<"\n\n";
    system("pause");
    return 0;
}