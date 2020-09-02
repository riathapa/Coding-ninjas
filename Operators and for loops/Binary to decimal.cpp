/*Binary to decimal
Send Feedback
Given a binary number as an integer N, convert it into decimal and print.

Input format :
An integer N in the Binary Format

Output format :
Corresponding Decimal number (as integer)

Constraints :
0 <= N <= 10^9
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, pv=0, r, d, ans=0;
	cin>>n;
	
	while(n!=0)
	{
		r = n%10;
		d = n/10;
		
		ans = ans +  r * pow(2, pv);
		pv++;
		n=d;
	}
	
	cout<<ans;
}
