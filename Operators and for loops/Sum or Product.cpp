/*Sum or Product

Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)
 
Input format :
Line 1 : Integer N
Line 2 : Choice C

Output Format :
 Sum or product according to user's choice
 
Constraints :
1 <= N <= 12
*/

#include<iostream>
using namespace std;

int main()
{
	int n, o, i, j, sum=0, p=1;
	
	
	cin>>n>>o;
	
	if(o==1)
	{
		for(i=0; i<=n; i++)
		{
			
			sum=sum+i;
				
		}
		cout<<sum;
	
	}
	
	else 
	if(o==2)
	{
		for(i=1; i<=n; i++)
		{
			p=p*i;
		}
		cout<<p;
		
	}
	else
	{
		cout<<-1;
	}
}
