#include<iostream>
#include<string.h>
using namespace std;

bool check(string str) 
{ 

    bool temp = true; 
    int sum = 0; 
  
    for (int i = 0; str[i] != '\0'; i++) { 
  
        if (str[i] == '(') { 
            sum++; 
        } 
        else { 
            sum--; 
        } 
        if (sum < 0) { 
            temp = false; 
            break; 
        } 
    } 
    
    if (sum != 0) { 
        temp = false; 
    } 
  
    return temp; 
} 

string push(string str1, string str2) 
{
 if(str2 == "(")
  str1.push_back('(');
 else
  str1.push_back(')');
 return str1; 
}

void get(int left, int right, string str)
{
 if(left == 0 && right == 0)
 {
  if (check(str))
   cout<<str<<endl;
 }
 else
 {
  if(left > 0)
   get(left-1,right,push(str,"("));
  if(right > 0)
   get(left,right-1,push(str,")"));
 }
}

void para(int n)
{
 get(n,n,"");
}


int main()
{
 int n;
 cin>>n;
 para(n);
 return 0;
}