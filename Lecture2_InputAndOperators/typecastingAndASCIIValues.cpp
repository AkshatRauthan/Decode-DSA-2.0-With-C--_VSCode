#include<iostream>
using namespace std;
int main(){
    // Typecasting : Interchanging Values Between Different Datatype.
    float x = 7.56;
    int y = int(x);
    cout<<y;
    // C++ automatically typecasts variables when operations between two different datatype tool place.
    // But sometimes this doesn't happen. So do explicitly typecast variables wherever required.
    // For Ex :-
    char ch = 'a';
    cout<<endl<<ch*1;
    // Here after typecasting the value of ch changes into ASCII value of character 'a' automatically.
    // ASCII value of some important characters :-
    // "A" ==> 65 , "a" ==> 97 , "0" ==> 48

}