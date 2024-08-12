#include<iostream>
using namespace std;
int main(){
    cout<<"The Value Of 23 % 5 is "<<23 % 5<<endl;
    cout<<"The Value Of 23 % (-5) is "<<23 % (-5)<<endl;
    cout<<"The Value Of (-23) % 5 is "<<(-23) % 5<<endl;
    cout<<"The Value Of (-23) % (-5) is "<<(-23) % (-5)<<endl;
    cout<<"The Value Of 23 % 25 is "<<23 % 25<<endl;
//    cout<<"The Value Of 23 % 25 is "<<(23.5) % (25.5)<<endl;
}
/*  PROPERTIES OF MODULUS OPERATOR :-

    i)  A % B = A % (-B)
   ii)  A % B = -[(-A) % B]
  iii)  A % B = -[(-A) % (-B)]
   iv)  [(-A) % (-B)] = -[(-A) % B]
    v)  A % B = A , IF A < B
   vi)  A % A = 0

    The Modulus Operator Works Only For Integer Datatype.
 */