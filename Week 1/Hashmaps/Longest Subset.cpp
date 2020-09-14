/* Longest Subset
Send Feedback
Given an array, find and return the length of longest subarray containing equal number of 0s and 1s.
Input Format :
Line 1 : Integer N, size of array
Line 2 : Array elements (separated by space)
Output Format :
Length of longest subarray
Contraints :
1<= N <=10^6
Sample Input 1 :
6 
1 0 0 1 1 1
Sample Output 1 :
4    
Sample Input 2 :
10 
1 1 1 0 0 0 1 1 0 0
Sample Output 2 :
10
*/ 

#include<unordered_map>
#include<iostream>
using namespace std;

int max(int arr[], int n) {
	/* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    unordered_map<int, int> s;
    
    int sum = 0, maxlen = 0, index = -1;
    
    for(int i=0; i<n; i++){
        arr[i]=(arr[i]==0) ? -1 : 1;
    }
        
    for(int i=0; i<n; i++){
        sum += arr[i];
        
        if(sum==0){
            maxlen = i+1;
            index = i;
        }
        
        if(s.find(sum+n)!=s.end()){
            if(maxlen<i-s[sum+n]){
                maxlen = i - s[sum+n];
                index =i;
            }
        }
        
        else 
            s[sum+n]=i;
    }
        
        for(int i=0; i<n; i++){
            arr[i] = arr[i]==-1 ? 0 : 1;
                
            }
    
    return maxlen;
        
        }
        