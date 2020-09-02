/*Count Characters
Send Feedback
Write a program to count and print the total number of characters 
(lowercase english alphabets only), digits (0 to 9) and white spaces 
(single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider 
all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces 
respectively (separated by space).

Input Format :
A stream of characters terminated by '$'

Output Format :
3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)
*/

#include<iostream>
using namespace std;

int main()
{
	int s=0, n=0, ch=0;
	char a;
	a=cin.get();
	
	while(a!='$')
	{
        if(a>='a' && a<='z')
        {
        	ch++;
		}
		else
		if(a>='0' && a<='9')
		{
			n++;
		}
		else
		if(a == ' ' || a=='\t' || a=='\n')
		{
			s++;
		}
		
		a=cin.get();
	}
	
	cout<<ch<<" "<<n<<" "<<s;
}
