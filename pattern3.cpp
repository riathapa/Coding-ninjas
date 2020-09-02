#include<iostream>
using namespace std;


int main(){
int n, i=1;
    cin>>n;
    
    while(i<=n)
    {
        int k=0;
        while(k<n-i)
        {
            cout<<" ";
                k=k+1;
        }
       int j=0;
       int val=i;
        while(j<i)
        {
            cout<<val;
            val=val+1;
            j+=1;
        }
        
        
        cout<<endl;
        i+=1;
    }
  
}



