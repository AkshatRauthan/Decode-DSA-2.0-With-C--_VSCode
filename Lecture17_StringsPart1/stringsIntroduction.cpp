#include "iostream"
using namespace std;
int main() {
    // char arr[6] = "Akshat";
    // The Above String Will Generate Error Because C++ Automatically Appends An Extra /0 Or Null Character At The ENd
    // Of The String. So Size Of The String Is 6+1=7.
    char arr[]="Akshat";
    char arr6[] = {'A','k','s','h','a','t'};
    for (int i = 0; arr6[i] != '\0'; i++) cout << arr6[i];
    cout<<"\n"<< sizeof(arr6)<<"\n"<<arr<<endl<<arr6<<endl;
    system("pause");
}