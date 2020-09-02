/*Terms of AP
Send Feedback
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
Input format :
Integer x
Output format :
Terms of series (separated by space)
Constraints :
1 <= N <= 1,000*/

#include<iostream>
using namespace std;

int main()
{
	int n, ap, j=0;
	cin>>n;
	
	int i=1;
	while(j!=n)
	{
		ap= (3*i) + 2;
		
		if(ap%4!=0)
		{
			cout<<ap<<" ";
		}
		else
		{
			j=j-1;
		}
				
		i++;
		j++;
		
	}
}
