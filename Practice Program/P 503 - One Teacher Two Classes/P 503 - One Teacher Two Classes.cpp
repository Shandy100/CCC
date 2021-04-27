/*
Jessy, the P.E instructor for Middle Vale High School has to arrange his students in line for aerobics. Thankfully, his class of students already came to the court in a line of increasing order of heights. Not so thankfully, James, another P.E instructor is on leave again. So she has to take care of his class right now as well. The second class of students also came in a line of increasing order of heights. But Jessy feels that is useless since she has to make both classes stand together in a single line for her exercises. But you, the janitor (and also a computer science graduate with no other job), sees that this is the right place to use the merge technique. So write a program to help Jessy arrange the students in ascending order of their heights.

Formally, given two sorted arrays, merge them into one sorted array and print the result.

INPUT

The first line of input is n (1

OUTPUT

Print the heights of the students in a row after both the lines have been merged.

Sample Input 0

5
2 4 6 8 10
5
1 3 5 7 9
Sample Output 0

1 2 3 4 5 6 7 8 9 10 
/*




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    
    int m;scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)scanf("%d",&b[i]);
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]<=b[j])printf("%d ",a[i++]);
        else printf("%d ",b[j++]);
    }
    while(i<n)printf("%d ",a[i++]);
    while(j<m)printf("%d ",b[j++]);
    return 0;
}