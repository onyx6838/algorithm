#include<bits/stdc++.h>
using namespace std;

void remove(int arr[], int n) 
{
  	map<int, bool> mp; 
  
    for (int i = 0; i < n; i++) 
	{ 
        if (mp.find(arr[i]) == mp.end()) 
		{ 
            cout << arr[i] << " "; 
        } 
        mp[arr[i]] = true; 
    } 
} 

int main() 
{ 
    int *a,n;
	cin>>n;
	a = new int[n];
	for(int i=0;i<n;i++)	cin>>a[i]; 
    remove(a, n); 
    return 0; 
}
