/*
Max Ones

You are given with an array of 1s and 0s. And you are given with an integer M, which signifies number of flips allowed. Find the length maximum continuous series of 1s using at max M bit flips.

Input Format

Complete the function given below, the function defination returns the value of the maximum length. It takes 3 parameters as input, int* array, int len, int m, denoting an array of size len, and 'm' flips.

Constraints

All the array elements will be 0 or 1, M will be less than N.

Output Format

Return the length of the maximum continuous series of 1s using at max M bit flips.

Sample Input 0

10 2
1 0 0 1 1 0 0 0 1 1 

Sample Output 0

5

*/

#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int maxOnesWithFlips(int array_size, int* array, int m)
{ int b=0;
	int wL = 0, wR = 0; 
	int bestL = 0, bestWindow = 0; 
	int zeroCount = 0; 
	while (wR < array_size) 
	{ 
		if (zeroCount <= m) 
		{ 
			if (array[wR] == 0) 
			zeroCount++; 
			wR++; 
		} 
		if (zeroCount > m) 
		{ 
			if (array[wL] == 0) 
			zeroCount--; 
			wL++; 
		} 

		if ((wR-wL > bestWindow) && (zeroCount<=m)) 
		{ 
			bestWindow = wR-wL; 
			bestL = wL; 
		} 
	} 

	for (int i=0; i<bestWindow; i++) 
	{ 
		if (array[bestL+i] == 0) 
        {array[bestL+i]=1;}
        
	}
    for (int i=0; i<bestWindow; i++) 
	{  b+=array[bestL+i];}
    return b;
}  
int main() { 
    int n;int m; 
    scanf("%i %i", &n, &m);
    int *array = malloc(sizeof(int) * n);
    for (int array_i = 0; array_i < n; array_i++) {
    	scanf("%i",&array[array_i]);
    }
    int result = maxOnesWithFlips(n, array, m);
    printf("%d\n", result);
return 0; 
} 
