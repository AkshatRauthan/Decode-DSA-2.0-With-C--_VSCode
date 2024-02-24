#include "iostream"
using namespace std;

int main(){
    class Student{
    public:
        int rno;
        string name;
        float gpa;
    };
    cout<<"\n";

    // Initialization Method 1 :-
    Student s1;
    s1.rno = 4;
    s1.name = "Alan";
    s1.gpa = 7.5;
    cout<<s1.rno<<endl;
    cout<<s1.name<<endl;
    cout<<s1.gpa<<endl;
    cout<<&s1<<endl;
    cout<<"\n";

    // Initialization Method 2 :-
    Student s2 = {10, "Akshat",8.5};
    cout<<s2.rno<<endl;
    cout<<s2.name<<endl;
    cout<<s2.gpa<<endl;
    cout<<&s2<<endl;
}