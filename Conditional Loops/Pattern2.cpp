

#include<iostream>
using namespace std;

int main()
{
	int i=1, val=1;
	
	int n;
	cin>>n;
	
	while(i<=n)
	{
		int j=1;
		int k=1;
		while(k<=n-i)
		{
			cout<<" ";
			k=k+1;
		}
		while(j<=i)
		{
			cout<<val;
			j=j+1;
			val=val+1;
		}
		cout<<endl;
		i=i+1;
	}
}
