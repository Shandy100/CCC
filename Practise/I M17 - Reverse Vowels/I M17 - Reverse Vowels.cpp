/*
I M17 - Reverse Vowels

Given a string, reverse only vowels in it. Leave the remaining string as it is.

Input Format

One string.

Constraints

1 = Length of string = 10^5

Output Format

One string, the original string with vowels reversed.

Sample Input 0

trumpisshit

Sample Output 0

trimpisshut

Explanation 0

vowels occur in the following order  u, i, i. they are reversed to occur in this order  i, i, u.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char str[100001],rev[100001];
    int i,j=0;
    scanf("%[^\n]s",str);
    i=0;
    while(str[i])
    {
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') 
       {
           rev[j]=str[i];
           j++;
       }
        i++;
    }
    j--;
    i=0;
    while(str[i])
    {
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') 
       {
           printf("%c",rev[j]);
           j--;
       }
        else 
         printf("%c",str[i]);
        
        i++;
    }
    
    
    return 0;
}