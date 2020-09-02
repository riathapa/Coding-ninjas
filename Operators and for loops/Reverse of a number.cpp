/*Reverse of a number
Send Feedback
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.


Input format :
Integer N

Output format :
Corresponding reverse number

Constraints:
0 <= N < 10^8
*/

#include<iostream>
using namespace std;

int main()
{
	int n, r, rev=0, d;
	cin>>n;
	
	while(n!=0)
	{
		r=n%10;
		d=n/10;
		rev=(rev*10) + r;		
		n=d;
	}
	
	cout<<rev;

}
	
	
	

