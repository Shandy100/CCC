/*
Just like a phoenix rises from the ashes, a phoenix word is built out of destruction of many words.

You are given a list of N words. From each word you can keep any one letter and discard the remaining letters. Then you can use the N chosen letters by concatenating them in any order to build a new string. Find the lexicographically smallest string that you can obtain.


INPUT

First line contains N, the number of words. (1 ≤ N ≤ 103)
Next N lines each contain a word made of small english alphabets only.
Sum of lengths of all words ≤ 103


OUTPUT

Output should contain one word : the lexicographically smallest word possible to build as given above.

Sample Input 0

3
cross
stop
arm
Sample Output 0

aco
Explanation 0

take a from arm, c from cross and o from stop.
/*


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(char*)a-*(char*)b;
}
int main() {
    int n; scanf("%d",&n);
    char a[n][1005],res[n+1];
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
        char min=a[i][0];
        for(int j=1;a[i][j]!='\0';j++)
        {
            if(min>a[i][j])min=a[i][j];
        }
        res[i]=min;
    }
    res[i]='\0';
    qsort(res,n,sizeof(char),cmp);
    printf("%s",res);
    return 0;
}