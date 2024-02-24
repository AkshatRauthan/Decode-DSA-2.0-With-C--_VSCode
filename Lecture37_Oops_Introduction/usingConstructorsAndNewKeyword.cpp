#include "iostream"
using namespace std;

class Student {
public:
    int rno;
    string name;
    float gpa;

    Student(string x, int y, float z){
        gpa = z;
        name = x;
        rno = y;
    }
};

int main() {
    // Dynamic Memory Allocation Of Objects :-   0
    Student s1("Alan", 19, 8.9);
    cout<<endl<<s1.name<<"  "<<s1.rno<<"  "<<s1.gpa;
}