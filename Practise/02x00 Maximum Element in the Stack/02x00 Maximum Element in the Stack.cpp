/*
02x00 Maximum Element in the Stack

image
Input Format

image

Constraints

image

Output Format

image

Sample Input 0

10
1 97
2
1 20
2
1 26
1 20
2
3
1 91
3
Sample Output 0

26
91
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int stack[10000001],maxstack[10000001],top=-1,mtop=-1;
int main() 
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int ch;
        scanf("%d",&ch);
        if(ch==1)
        {
            int x;
            scanf("%d",&x);
            
            if(mtop==-1 || x>=maxstack[mtop])
                maxstack[++mtop]=x;
            
            stack[++top]=x;
        }
        else if(ch==2)
        {
            if(stack[top]==maxstack[mtop])
                mtop--;
            
            top--;
        }
        else 
            printf("%d\n",maxstack[mtop]);
    }
    
    return 0;
}