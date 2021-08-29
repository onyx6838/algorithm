#include<bits/stdc++.h>  
#include<string.h> 
using namespace std;

int sum(int n){
    int d = 0;
    while(n > 0){
        d += n % 10;
        n /= 10;
    }
    return d;
}
std::vector<int> digitalSumSort(vector<int> a)
{
    for (int i = 0; i < a.size()-1; i++)
    	for (int j = i + 1; j < a.size(); j++)
		    if (sum(a[i]) > sum(a[j]) || (sum(a[i]) == sum(a[j]) && a[i] > a[j])){
		        swap(a[i], a[j]);
		    }
		    
    return a;
}

int main()  
{  
    vector<int> arr = {13, 20, 7, 4};
    vector<int> arr_out;
  
    arr_out = digitalSumSort(arr);
  	for(auto x:arr_out) cout<<x<<" ";
      
    return 0;  
}

