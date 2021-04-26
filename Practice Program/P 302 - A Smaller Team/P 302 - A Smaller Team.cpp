/*
P 302 - A Smaller Team

A Smaller Team

The coach from the previous problem has now changed his mind. He only wants to take n-k people into the team. He asks the first person in the line to go find the shortest person and switch places with him. He then asks the second person in line to go find the second shortest person and switch places with him. So on, until the kth person has switched with the Kth shortest person in front of the line.

Formally, swap the first element of the array with the smallest element of the array, then second element of the array with the second smallest element in the array and so on. Repeat this process k times.

INPUT

The first line of input is n (1≤n≤100), the number of applicants for the basketball team The second line of input is the heights of the n players (distinct positive numbers) each separated by a space. The third line of input is the number k (1≤k≤n)

OUTPUT

Print the heights of the players in a line after the k switches are complete.

Sample Input 0

7
4 9 6 3 1 7 5
4
Sample Output 0

1 3 4 5 6 7 9 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,minIndex,i,k,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(j=0;j<k;j++)
    {
        minIndex=j;
        for(i=j+1;i<n;i++)
        {
            if(a[minIndex]>a[i])
                minIndex=i;
        }
        int t=a[j];
        a[j]=a[minIndex];
        a[minIndex]=t;
    }
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
    return 0;
}