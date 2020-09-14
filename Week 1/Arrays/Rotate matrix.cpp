/*  Code : Rotate matrix
Send Feedback
Given an N*N integer square matrix, rotate it by 90 degrees in anti-clockwise direction.
Try doing it without any extra space.
Note : You just need to change in the given input itself. No need to return or print anything.
Input format :
Line 1 : Integers N
Next N lines : N integers, elements of one row (separated by space)
Output Format :
Updated matrix
Constraints :
1 <= N <= 1000
Sample Input :
3
1 2 3
4 5 6
7 8 9
Sample Output :
3  6  9 
2  5  8 
1  4  7
*/

void rotate(int **mat, int n){
    
    for (int x = 0; x < n / 2; x++) { 
        // Consider elements in group 
        // of 4 in current square 
        for (int y = x; y < n - x - 1; y++) { 
            // Store current cell in 
            // temp variable 
            int temp = mat[x][y]; 
  
            // Move values from right to top 
            mat[x][y] = mat[y][n - 1 - x]; 
  
            // Move values from bottom to right 
            mat[y][n - 1 - x] = mat[n - 1 - x][n - 1 - y]; 
  
            // Move values from left to bottom 
            mat[n - 1 - x][n - 1 - y] = mat[n - 1 - y][x]; 
  
            // Assign temp to left 
            mat[n - 1 - y][x] = temp; 
        } 
    } 
}
