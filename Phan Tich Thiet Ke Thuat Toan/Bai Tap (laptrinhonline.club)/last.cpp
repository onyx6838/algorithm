#include <bits/stdc++.h> 
using namespace std; 
int lastDigit(int x, int y) 
{ 
    int res = 1; 
    for (int i = 0; i < y; i++) 
        res = (res * x) % 10;
    return res; 
}
int main() 
{   
	int m,n;
	cin>>m>>n;
   	cout << lastDigit(m,n); 
   	return 0; 
} 
