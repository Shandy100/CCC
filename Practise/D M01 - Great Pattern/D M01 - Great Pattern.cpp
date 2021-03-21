/*
D M01 - Great Pattern

Your task is simple, write a program in Java to print the following pattern :

N = 1
1

N = 2
  1
1 2 1
  1
  
N = 3
    1
  1 2 1
1 2 3 2 1
  1 2 1
    1
    
and so on..
INPUT
Input consists of many test cases.
First line contains the number of test case T.
Each of the test case lines consists of one number N for that test case.

OUTPUT
Print the pattern corresponding to the N value of each test case.
Print a blank line between two test case outputs.

CONSTRAINTS
1 ≤ T, N ≤ 10

Sample Input 0

3
1
2
3
Sample Output 0

1

  1
1 2 1
  1
  
    1
  1 2 1
1 2 3 2 1
  1 2 1
    1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int t,n,i,j,k,l;
void print(int n)
{
    for(i=1;i<=n;i++)
        {
            for(j=i;j<n;j++)
                printf("  ");
            for(k=1;k<=i;k++)
                printf("%d ",k);
            for(l=k-2;l>0;l--)
               printf("%d ",l);
            printf("\n");
        }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("  ");
        for(k=1;k<n-i+1;k++)
            printf("%d ",k);
        for(l=n-i-1;l>0;l--)
            printf("%d ",l);
        printf("\n");
    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        print(n);
        
    }
    return 0;
}