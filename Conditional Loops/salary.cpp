/* Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) 
and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.
Note: Try finding out a function on the internet to do so
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int salary;
	char grade;
	double allow=0;
	double sal;
	cin>>salary>>grade;
	
	int total;
	double hra, da, pf;
	
	hra = (0.2)* double(salary);
	da = (0.5)* double(salary);
	pf= (0.11) * double(salary);
	
	if(grade=='A')
	{
		allow = 1700.00;
	}
	
	else
	if(grade=='B')
	{
		allow = 1500.00;
	}
	
	else
	{
		allow = 1300.00;
	}
	
	sal = double(salary) + hra + da + allow - pf;
	sal=round(sal);
	
	
	cout<<sal;
}
