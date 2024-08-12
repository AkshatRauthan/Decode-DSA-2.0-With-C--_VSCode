#include "iostream"
using namespace std;
void display(int a[]){
    for(int i=0;i<=20;i++)   cout<<" "<<a[i]<<"\n";
}
int main(){
    int n;
    int arr[100]={0};
    for (int i=0;n!=-1;i++){
        cout<<"Enter The Element :\n";
        cin>>n;
        if (n!=-1) arr[i]=n;
    }
    display(arr);
    system("pause");
}