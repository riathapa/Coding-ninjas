/*  Pairs with difference K
Send Feedback
You are given with an array of integers and an integer K. Write a program to find and print all pairs which have difference K.
Take difference as absolute.
Input Format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)
Line 3 : K
Output format :
Print pairs in different lines (pair elements separated by space). In a pair, smaller element should be printed first.
(Order of different pairs is not important)
Constraints :
0 <= n <= 10^4
Sample Input 1 :
4 
5 1 2 4
3
Sample Output 1 :
2 5
1 4
Sample Input 2 :
4
4 4 4 4 
0
Sample Output 2 :
4 4
4 4
4 4
4 4
4 4
4 4
*/

#include<iostream>
#include<unordered_map>
using namespace std;

void printPairs(int *arr, int n, int k) {
	unordered_map<int, int> M;
    
    for(int i=0; i<n; i++){
        M[arr[i]] += 1;
    }
    
    if(k == 0){
        
        for(auto it= M.begin(); it != M.end(); it++){
            int count = it->second;
            
            for(int i=0; i< (count * (count-1))/2; i++){
                cout << it->first << " " << it->second << endl;
            }
        }
        
        return ;
    }
    
    for(auto it= M.begin(); it != M.end(); it++){
        int val = it->first + k;
        
        if(M.count(val) > 0){
            int x1 = it->second;
            int x2 = M[val];
            
            for(int i=0; i< x1 * x2; i++){
                cout << min(val, it->first) << " " << max(val, it->first) << endl;
            }
        }
    }
    
    return ;

}

