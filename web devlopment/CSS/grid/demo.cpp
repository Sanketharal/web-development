#include<iostream>
using namespace std;

class Student{
public:
    int age;
    string name;
    bool present;
    int id;

    private:
    string gf;

    Student(int age)
};

int main(){

    Student s1;
    s1.name="Sanket";
    s1.age=22;
    
    cout<<s1.name;
    
}