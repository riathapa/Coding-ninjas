/*Find power of a number
Send Feedback
Write a program to find x to the power n (i.e. x^n). 
Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1


Input format :
Two integers x and n (separated by space)

Output Format :
x^n (i.e. x raise to the power n)

Constraints:
0 <= x <= 8 
0 <= n <= 9
*/

#include<iostream>
using namespace std;

int main()
{
	int x, n, i=1, e=1;
	cin>>x>>n;
	
	if(x>=0 && x<=8 && n>=0 && n<=9)
	{
		
		while(i<=n)
		{
			e=e*x;
			i++;
		}
	}
	
	cout<<e;
}
