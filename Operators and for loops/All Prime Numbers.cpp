/*All Prime Numbers
Send Feedback
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.

Input Format :
Integer N

Output Format :
Prime numbers in different lines

Constraints :
1 <= N <= 100*/

#include<iostream>
using namespace std;

int main()
{
	int n, k=2;
	cin>>n;
	
	bool isPrime;
	for(int i=2;i<=n;i++)
	{
        isPrime = true;
		for(int j=2; j<i; j++)
		{
           if(i%j==0){
               isPrime = false;
               break;
           }
        }
        if(isPrime==true){
            cout<<i<<endl;
        }
    }
			
}
