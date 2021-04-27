/*
A postfix expression is of the form instead of the traditional infix expression which follows the form .

Your task is to write a program that takes advantage of the stack data structure and converts a given infix expression into its postfix expression.

INPUT

There will be only a single line of input, the string that denotes the infix expression to be converted into its postfix counterpart.

There are four arithmetic operations and capital letters used as variables/operands.

Look at the sample Input/Output for clarity

OUTPUT

Output the final postfix expression after converting it to postfix from infix.

Sample Input 0

A+B
Sample Output 0

AB+

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char s[1005];
int top=-1;
int main() {
    char a[1005];
    scanf("%s",a);
    int i=0;
    while(a[i])
    {
        if(a[i]>='A' && a[i]<='Z')printf("%c",a[i]);
        else if(a[i]=='(')s[++top]=a[i];
        else if(a[i]==')'){
            while(s[top]!='(') printf("%c",s[top--]);
            top--;
        }
        else if(a[i]=='+'||a[i]=='-')
        {
            while((top!=-1) && (s[top]=='+'||s[top]=='-'||s[top]=='*'||s[top]=='/'))printf("%c",s[top--]);
            s[++top]=a[i];
        }
        else{
            while((top!=-1) && (s[top]=='*'||s[top]=='/'))printf("%c",s[top--]);
            s[++top]=a[i];
        }
        i++;
    }
    while(top!=-1)printf("%c",s[top--]);
    return 0;
}