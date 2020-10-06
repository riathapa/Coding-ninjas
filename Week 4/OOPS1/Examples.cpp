#include<iostream>
using namespace std;
#include "Student.cpp"

int main(){
    Student s1; //Construstor 1 called

    Student s2(101); //Constructor 2 called

    Student s3(20, 102); // constructor 3 called

    Student s4(s3);  //Copy constructor

    s1 = s2;  //Copy assignment operator

    Student s5 = s4; //gets interpreted as Student s5(s4)
}