/*
You are given N tasks, each of them has a starting time and an ending time.

Given that you can only work on a single task at a time, write a program to find out the maximum number of tasks that you can complete.

Note that in order to complete a task you must work on it from its starting time to its ending time and you can only work on one task at a time.

INPUT
First line contains the number of test cases T.
For every test case :
First line contains the integer N.
Next line contains N integers denoting the starting times of tasks.
Last line contains N integers denoting the ending times of tasks.

OUTPUT
Print one number, the maximum number of tasks that can be completed for every test case on a new line

NOTES
1 ≤ N, Si, Ei ≤ 105

Sample Input 0

2
6
1 3 0 5 8 5
2 4 6 7 9 9
6
5 1 3 0 5 8
9 2 4 6 7 9
Sample Output 0

4
4

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct task{
    int s,e;
};
int cmp(const void*a,const void *b)
{
    struct task*x=(struct task*)a,*y=(struct task*)b;
    return x->e - y->e;
}
int main() {
    int t; scanf("%d",&t);
    while(t--)
    {
        int n; scanf("%d",&n);
        struct task a[n];
        for(int i=0;i<n;i++)scanf("%d",&a[i].s);
        for(int i=0;i<n;i++)scanf("%d",&a[i].e);
        qsort(a,n,sizeof(struct task),cmp);
        int c=1,i=0;
        for(int j=1;j<n;j++)
        {
            if(a[i].e<=a[j].s)
            {
                c++;
                i=j;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}