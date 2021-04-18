#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std; 
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1],arr[high]); 
    return (i + 1); 
} 
 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    int i=0;
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
        cout<<pi<<endl;
        // Separately sort elements before 
        // partition and after partition 
        for(i=low;i<high+1;i++)
        {
            cout<<arr[i]<<" ";;
        }
        cout<<endl;
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
int main() {
    int num,a[1000],k,temp,i;
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    quickSort(a,0,num-1);
    return 0;
}
