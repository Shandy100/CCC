/*
Given a number N, find the largest number that you can form with its digits. You are allowed to rearrange the digits in any way you wish as long as the resultant number does not contain any leading zeroes.

Input Format

Only one line of input with number N.

Constraints

1 <= N <= 10^9

Output Format

Output one number, which is the largest possible number that can be formed with the digits of N.

Sample Input 0

5318008
Sample Output 0

8853100
/*



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(char*)b-*(char*)a;
}
int main() {
    char ch[11];
    scanf("%s",ch);
    qsort(ch,strlen(ch),sizeof(char),cmp);
    printf("%s",ch);
    return 0;
}