#include "iostream"
using namespace std;

void pip(int n){
    if (n == 0) return;
    cout<<"\tPre  :\t"<<n<<endl;
    pip(n-1);
    cout<<"\tIn   :\t"<<n<<endl;
    pip(n-1);
    cout<<"\tPost :\t"<<n<<endl;
}

int main(){
    int n;
    cout<<"\nEnter The Value Of n : \n";
    cin>>n;
    pip(n);
    cout<<"\n\n";
    system("pause");
}