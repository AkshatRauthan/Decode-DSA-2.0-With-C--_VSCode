#include "iostream"
using namespace std;
int main() {
    int x = 6;
    x++;
    cout << endl << x << endl;
    int *p = &x;
    cout << "Value of p : " << p;
    p += 1;
    cout << "\nValue Of p+1 : " << p << "\n\n";
    system("pause");
}
// Here Address Of p is 0xdc9fffd54
// And Address pf p+1 is 0xdc9fffd58
// Now The Above Code Is Written In Hexa-Decimal From After 0x
// Now We Can Clearly See That There Is A Difference Of 4 bytes In Between These Two Memory Locations.
// These 4 bytes Are The Memory Location Where Our First Variable x Is Stored. [Size of integer : 4 bytes]
// Therefore, The Increment In Memory Location's Address Depends Upon The Datatype Of The Pointer.
// Therefore, These Two Memory Locations Are In Continuation.
// Remember, Memory Location Of A Variable Is The Address Of Its First Byte.