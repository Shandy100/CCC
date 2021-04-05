#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,k=0,temp;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<=a[n-1]){
            temp=a[i];
            a[i]=a[k];
            a[k]=temp;
        ++k;}
        
        
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
