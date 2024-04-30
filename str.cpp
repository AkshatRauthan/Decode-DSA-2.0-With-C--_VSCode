#include "iostream"
#include "string"
using namespace std;

int main(){

    // Char Array
    char ch[] = "Akshat\0Rauthan";
    cout<<ch;
    // sizeof(arr) = > Because arr represents a pointer to arr. And Sizeof will return the size of the pointer instread
    // Therefore will return 8.


    // Strings :
    // All Functions Of Vectors Will Work.
    // Functions : 
    // 1 : isalpha(char ch) => 1 if an alphabet is passed else return 0.
    // 2 : isdigit(char ch) => 1 if a digit is passed else return 0.
    // 3 : toupper(char ch) => ch += 'A' - 'a'
    // 4 : tolower(char ch) => ch -= 'A' - 'a'
    // 5 : to_string()
}