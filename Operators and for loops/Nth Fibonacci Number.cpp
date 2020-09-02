/*
Nth Fibonacci Number
Send Feedback
Nth term of fibonacci series F(n) is calculated using following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.

Input Format :
Integer n

Output Format :
Nth Fibonacci term i.e. F(n)

Constraints:
1 <= n <= 25
*/

#include<iostream>
using namespace std;

int main()
{
	int n, i=1, j, sum=0, total;
	cin>>n;
	
	if(n>=1 && n<=25)
	{
		for(int j=2; j<=n; j++)
		{
			total=sum+i;
			
			sum=i;
			i=total;
		}
		
		}
	cout<<total;	
}
