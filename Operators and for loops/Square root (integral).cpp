/* Square Root (Integral)
Send Feedback
Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.
Input format :
Integer N 

Output Format :
Square root of N (integer part only)

Constraints :
0 <= N <= 10^8 
*/

#include<iostream>
using namespace std;

int main()
{
	long n, i, pro, p1, P;
	long ans=0;
	cin>>n;
	
	for(pro=1; pro<=n; pro++)
	{
		P=pro*pro;
		if(P<=n)
		{
			p1=pro;
		}
	}
	
    
    cout<<p1;
}
