#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int a,i;
    cin>>a;
    int b[a];
    for(i=0;i<a;i++)
    {cin>>b[i];}
    sort(b,b+a);
    for(i=0;i<a;i++)
    {cout<<b[i]<<" ";}
    return 0;
}
