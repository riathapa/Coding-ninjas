#include<iostream>
using namespace std;
#include "Student.cpp"

int main(){

    //Create objects statically    
    Student s1;
    Student s3, s4, s5;

    //s1.age = 24;    
    s1.rollNumber = 101;

    cout<<s1.getAge()<<endl;
    cout<<s1.rollNumber<<endl;

    s1.dispaly();
    

    //s5.age = 30;



    //Create objects dynamically
    Student *s6 = new Student;

    //(*s6).age = 23;
    (*s6).rollNumber = 104;

    cout<<"S6 age:"<<s6->getAge()<<endl;
    //s6 -> age =23;
    s6 -> rollNumber = 104;
    s6 -> dispaly();

}