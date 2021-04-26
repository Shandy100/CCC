/*
R 305 - Height of a Binary Search Tree

You are given N values to be inserted into a binary search tree. Every value in the left subtree fo a node x must be less than or equal to x and every value in the right subtree of a node x must be greater than x.
You are to insert the N values into a binary search tree in the order that they are given. Print the resultant binary search tree's height.

Input Format

First line contains a number N. Next line contains N integers.

Constraints

1 <= N <= 1000

Output Format

Output one integer that is the height of the binary search tree.

Sample Input 0

10
2 8 5 1 10 5 9 9 3 5 

Sample Output 0

6
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    struct node *l;
    int val;
    struct node *r;
}*root=NULL;
struct node* insertNew(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->l=NULL;
    temp->val=x;
    temp->r=NULL;
    
    return temp;
}
struct node* insert(int x,struct node* root)
{
    if(root==NULL)
    {
        root=insertNew(x);
    }
    else if(x <= root->val)
    {
        root->l=insert(x,root->l);
    }
    else 
    {
        root->r=insert(x,root->r);
    }
    return root;
}

int heightBST(struct node *root)
{
    int lh=0,rh=0,h=0;
    if(root==NULL)
        return 0;
    lh=heightBST(root->l);
    rh=heightBST(root->r);
    if(lh>rh)
        h=lh;
    else 
        h=rh;
    return h+1;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int x;
        scanf("%d",&x);
        root=insert(x,root);
    }
    printf("%d",heightBST(root));
    return 0;
}