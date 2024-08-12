#include "iostream"
using namespace std;
void first_and_last_digit(int a,int &x,int &y){
    y = a%10;
    while(a%10>0){
        if (a%10<10) x = a%10;
        a/=10;
    }
    return;
}
int main() {
    int a;
    cout<<"Enter The Number :\n";
    cin>>a;
    int x,y;
    first_and_last_digit(a,x,y);
    cout<<"The First Digit Of The Number Is : "<<x;
    cout<<"\nThe Last Digit Of The Number Is : "<<y<<"\n\n";
    system("pause");
}