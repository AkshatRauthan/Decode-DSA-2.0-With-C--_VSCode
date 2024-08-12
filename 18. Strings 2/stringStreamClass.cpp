#include "iostream"
#include "sstream"
#include "string"
using namespace std;
int main() {
    // This Class Is Used To Substrings From A String That Are Seperated By Whitespaces
    string str = "My Name    Is Akshat Rauthan" ;
    stringstream ss(str);
    string temp;
    while (ss>>temp) cout<<temp<<endl;
    // Here The ss string-stream Is Working Like cin And Is Storing The Substrings In temp string
    system("pause");

}