/* Decimal to Binary
Send Feedback
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note : The given input number could be large, so the corresponding
 binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.


Input format :
Integer N

Output format :
Corresponding Binary number (long)

Constraints :
0 <= N <= 10^5
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long n;
	int r, d, ans, pv=0;
	cin>>n;
	
	while(n!=0)
	{
		r=n%2;
		d=n/2;
		
		ans=ans + r*pow(10, pv);
		
		pv++;
		n=d;
	}
	
	cout<<ans;
}
