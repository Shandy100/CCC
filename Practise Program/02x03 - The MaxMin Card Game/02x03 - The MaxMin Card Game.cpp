/*
02x03 - The MaxMin Card Game

This card game begins with an empty deck.

There are following types of operations in the game :
Add X : Add a card with number X onto the top of the deck pile.
Remove : Remove the TopMost card from the deck pile.
CallMin : Find the minimum numbered card from the deck pile.
CallMax : Find the maximum numbered card from the deck pile.

You are given a sequence of operations of the game and your task is to write a program to play the game.

NOTE : You are expected to use the stack data structure only to get optimal solution. Other solutions may not be efficient enough.

INPUT

First line contains N the number of operations.
Next N lines each contain one operation each : "Add X", "Remove", "CallMax" or "CallMin" where X can be any non-negative integer.

OUTPUT

Output the minimum element whenever CallMin command is given, the maximum element whenever CallMax command is given, or "Invalid" whenever CallMin/CallMax/Remove command is given on an empty stack.

Sample Input 0

15
Add 1
Add 2
Add 3
CallMin
CallMax
Add 0
CallMin
CallMax
Remove
Remove
CallMin
Remove
Remove
Remove
CallMax
Sample Output 0

1
3
0
3
1
Invalid
Invalid
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int stack[100000],minstack[100000],maxstack[100000],top=-1,mintop=-1,maxtop=-1;
int n,x;
char ch[10];
void push(int x)
{
    if(mintop==-1 || x<=minstack[mintop])
        minstack[++mintop]=x;
    if(maxtop==-1 || x>=maxstack[maxtop])
        maxstack[++maxtop]=x;
    stack[++top]=x;
}
void pop()
{
    if(top==-1)
     printf("Invalid\n");
    else 
    {
        if(stack[top]==minstack[mintop])
            mintop--;
        if(stack[top]==maxstack[maxtop])
            maxtop--;
        top--;
    }
}
void min()
{
    if(top==-1)
        printf("Invalid\n");
    else 
        printf("%d\n",minstack[mintop]);
}
void max()
{
    if(top==-1)
        printf("Invalid\n");
    else 
        printf("%d\n",maxstack[maxtop]);
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",ch);
        if(ch[0]=='A')
        {
            scanf("%d",&x);
            push(x);
        }
        else if(ch[0]=='R')
         pop();
        else if(ch[6]=='n')
            min();
        else 
            max();
    }
    return 0;
}