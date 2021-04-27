/*
FIND THE SUM OF THE MAXIMUM SUBARRAY.

Input Format

First line contains N value denoting number of integers

Next line contains N integers seperated by a space.

Constraints

1<=N<1000000

-10000<=a[i]<=10000

Output Format

A single integer denoting sum of the maximum sub array

Sample Input 0

8
-1 2 4 -3 5 2 -5 2
Sample Output 0

10

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
int main() {
    int max=INT_MIN,sum=0,n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum>max)max=sum;
        if(sum<0)sum=0;
    }
    printf("%d",max);
    return 0;
}