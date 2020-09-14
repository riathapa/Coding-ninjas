/* Code : Check Permutation
Send Feedback
Given two strings, S and T, check if they are permutations of each other. Return true or false.
Permutation means - length of both the strings should same and should contain same set of characters. Order of characters doesn't matter.
Note : Input strings contain only lowercase english alphabets.


Input format :
Line 1 : String 1
Line 2 : String 2
Output format :
'true' or 'false'
Constraints :
0 <= |S| <= 10^7
0 <= |T| <= 10^7
where |S| represents the length of string, S.
Sample Input 1 :
abcde
baedc
Sample Output 1 :
true
Sample Input 2 :
abc
cbd
Sample Output 2 :
false 
*/

bool isPermutation(char input1[], char input2[]) {
     int i, arr[256] = {0};
    
    for(i=0;input1[i]!='\0';i++){
        arr[input1[i]]++;
    }
    for(i=0;input2[i]!='\0';i++){
        arr[input2[i]]--;
    }
    
	for(i=0;i<256;i++){
        if(arr[i]!=0){
            return 0;
        }
    }
    return 1;
}

