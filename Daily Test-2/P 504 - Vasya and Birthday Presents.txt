#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void*a,const void *b)
{
    return *(int*)b-*(int*)a;
}
int main() {
int t ;
    scanf("%d",&t);
    while(t--)
    {
        int n; scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        for(int i=0;i<n;i++) printf("%d ",a[i]);
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
