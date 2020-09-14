/* Reverse string Word Wise
Send Feedback
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always  
*/

#include<bits/stdc++.h>
using namespace std;
void reverseStringWordWise(char input[]) {
    int l= strlen(input);
    int start, end = l;
    int k=0; 
    char result[l+1]; 
      
    while(l >= 0) 
    { 
        if(input[l] == ' ') 
        { 
            start = l + 1; 
            while(start != end) 
                result[k++] = input[start++]; 
              
            result[k++]= ' '; 
              
            end = l; 
        } 
        l--; 
    } 
    start = 0; 
    while(start != end) 
        result[k++]= input[start++];
    result[k]='\0';
      
    strcpy(input,result);
}
