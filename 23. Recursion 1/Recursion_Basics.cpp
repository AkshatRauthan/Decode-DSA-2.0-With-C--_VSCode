#include "iostream"
using namespace std;

// Recursion Is Simply A Replacement Of Hectic And Lengthy Loops.
// Recursion ==>> Problem = Something + Sub-Problem.

// Given Below Is A Recursive Function That Runs n Number Of Times After Taking n As Input.

int fun(int n){
    cout<<n<<"\n";
    if (!(n-1)) return 0;
    else return fun (n-1);
}

int main(){
    int n;
    cout<<"\nEnter The Value Of n :-\n";
    cin>>n;
    cout<<"\n";
    fun(n);
}