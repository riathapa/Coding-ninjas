//classes and objects 
#include<iostream>
using namespace std;

class Student{
    public:
    int rollNumber;

    private:
    int age;

    public:

    ~Student(){
        cout<<"Constructor destroyed!!"<<endl;
    }

    //Default Constructor
    Student(){
        cout<<"Constructor Called!"<<endl;
    }

    //Parameterised constructor as it takes argument
    Student(int rollNumber){
        cout<<"Constructor 2 called!";
        this -> rollNumber = rollNumber;
    }

    Student(int n, int r){
        cout<<"This : " << this <<endl;
        cout<<"Constructor 3 called"<<endl;
        this -> age = n;
        this -> rollNumber = r;
    }

    void display(){
        cout<< age <<" "<< rollNumber<<endl;
    }

    int getAge(){
        return age;
    }

    void setAge(int n, int password){
        if(password !=123){
            return;
        }
        if(n<0){
            return;
            }
        age = n;
    
    }

};