#include <iostream>
#include <string>
using namespace std;

class Student{              // tells c++ we are creating a blueprint and Student is the name of it
    public:                 //access specifier - gives the access or doenst to the object to access it using dot(.)operator.
        string name;
        int age;
        Student(string name,int age){          //Constructor to initialize object.
            this->name=name;
            this->age=age;                  //this pointer for the same name confusion.
        }
};

int main(){
    Student s1("Sarthak",20);    //use of parameters
    // s1.Student();           In case of constructor we dont need to write the exact thing it automatically does it behind the scenes.
    cout<<s1.age;
    return 0;
}