#include<iostream>
using namespace std;
#include "Student.cpp"

int main(){

    //Copy aSsignment operator
    
    Student s1(10, 1001);
    Student s2(2, 2001);
    Student *s3 = new Student(3, 3001);

    s2 = s1;
    *s3 = s1;

    s2 = *s3;

    delete s3;

/*
    Student s1(10, 1001);
    cout<<"s1: ";
    s1.display();

    Student s2(s1); //Copy constructor
    cout<<"s2: ";
    s2.display();


    Student *s3 = new Student(20, 2001);
    cout<<"s3: ";
    s3->display();

    Student s4(*s3);
    cout<<"S4 : ";
    s4.display();

    Student *s5 = new Student(*s3);
    Student *s6 = new Student(s1);

    s5 ->display();
    s6 ->display()*/
}