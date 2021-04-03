#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int n;
    int t;
    cin >> n >> t;
    vector<int> c(t);
    for(int c_i = 0; c_i < t; c_i++){
       cin >> c[c_i];
    }
    
    int count = 0;
    int candies = n;
    for(int i =0 ; i< t;i++)
    {
        n = n - c[i];
     //   cout << "n "<<n<<" i "<<i << " c[i] "<< c[i]<<endl;
        if(n < 5 && i != t - 1)
        {
            count = count + candies - n;
            n = n + (candies - n);    
        }
        
  //      cout << "n "<<n<<" i "<<i << " c[i] "<< c[i]<<endl;
        
    }
    
    cout << count;
    // your code goes here
    return 0;
}
