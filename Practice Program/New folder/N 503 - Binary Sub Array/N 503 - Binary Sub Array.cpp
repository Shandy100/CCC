/*
The binary number system only uses two digits, 0 and 1. You are required to calculate the length of the longest contiguous subarray that has all ones in the array. Implement the function ‘MaxBinaryStringLen’ and return the length of the largest window of 1s.

Input Format

The First line contains N, the number of elements in the array
The next N integers contain 0 or 1.

Constraints

1<= N <= 100000

Output Format

Return the value asked.

Sample Input 0

10
1 0 0 1 1 0 0 0 1 1 
Sample Output 0

2
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int MaxBinaryStringLen(int n, int* a) {
    int sum=0,max=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(max<sum)max=sum;
        if(a[i]==0)sum=0;
    }
    return max;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *array = malloc(sizeof(int) * n);
    for (int array_i = 0; array_i < n; array_i++) {
    	scanf("%i",&array[array_i]);
    }
    int result = MaxBinaryStringLen(n, array);
    printf("%d\n", result);
    return 0;
}