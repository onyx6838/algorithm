#include<bits/stdc++.h> 
using namespace std; 
  
// Function to remove duplicate from array 
void removeDuplicates(int arr[], int n) 
{ 
    set<int> s; 
      
    // adding elements to LinkedHashSet 
    for (int i = 0; i < n; i++) 
        s.insert(arr[i]); 
  
    // Print the elements of LinkedHashSet 

    for(auto x:s) 
    cout << x << " "; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 1, 9, 0, 0, 1, 5, -7, 0, -7, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    removeDuplicates(arr, n); 
} 
