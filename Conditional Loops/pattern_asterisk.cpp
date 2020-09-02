/*Print the following pattern
Pattern for N = 4



The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
*/

#include<iostream>
using namespace std;


int main(){
int n, i=0, val=0;
    cin>>n;
    
    while(i<n)
    {
        int k=1;
        while(k<n-i)
        {
            cout<<" ";
                k=k+1;
        }
       
       int m=0;
	   while(m<val+i+1)
	   {
	   	cout<<'*';
	   	m=m+1;
	   }
       
       val=val+1;
        
        cout<<endl;
        i+=1;
    }
  
}



