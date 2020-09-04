/* Check Number sequence
Send Feedback
You are given S a sequence of n integers i.e. S = s1, 
s2, ..., sn. Compute if it is possible to split S into two parts : s1, s2, ..., 
si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly
 decreasing while the second is strictly increasing one.
Note : We say that x is strictly larger than y when x > y.
So, a strictly increasing sequence can be 1 4 8. However, 1 4 4 is NOT a strictly increasing sequence.


That is, in the sequence if numbers are decreasing, they can start increase
 at one point. And once number starts increasing, they cannot decrease at any point further.
Sequence made up of only increasing numbers or only decreasing numbers
 is a valid sequence. So in both the cases, print true.

You just need to print true/false. No need to split the sequence.

Input format :
Line 1 : Integer 'n'
Line 2 and Onwards : 'n' integers on 'n' lines(single integer on each line)

Output Format :
"true" or "false" (without quotes)

Constraints :
0 <= n <= 10^7 
*/

#include<iostream>
using namespace std;

int main()
{
	int n1, n2, n3, n4;
	n1=cin.get();
	n2=cin.get();
	 
	 bool is_stabe = true;
 	
 	n3=cin.get();
 	
 	while(is_stable)
 	{
	 if(n1>n2 && n2>n3)
	{
	 	is_stable=true;
	}	
	
	else
	if(n1<n2 && n2<n3)
	{
		is_stable=true;
	}
	
	else
	if(n1>n2 && n2<n3)
	{
		is_stable = true;
	}
	
	else
	{
		isdec=false;
		isinc=false;
		isstable=false;
	}
	
	n4=cin.get();
	n1=n2; 
	n2=n3;
	n3=n4;
	
	}
	cout<<is_stable;
}







