#include "iostream"
using namespace std;
void display(int a[]){
    for(int i=0;i<=4;i++)   cout<<" "<<a[i]<<"\n";
}
int main(){
    int arr[]={1,4,7,10,13};
    cout<<"\n\n"<<&arr<<"\n\n";

    // Here The cout<<arr Is Giving The Address Of The Array As The Output.
    // Therefore, If We Will Pass The Array As The Input In A Function, Actually We Are Passing The
    // Address Of The Array And Are Performing A Pass By Reference Operation.
    // Therefore, All The Changes We Will Make In The Default Array Of The Function Will Get Reflected In
    // Our Original Array Present In The main() Function.
    // cout<<arr == cout<<&arr == cout<<arr[0]

    display(arr);
    cout<<"\n\n";
    system("pause");
}