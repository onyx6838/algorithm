/*
B�i 10. Cho m?t m?ng c�c s? nguy�n arr v� m?t s? nguy�n d??ng k. H�y vi?t h�m tr? v? c�c ph?n t? �m ??u ti�n trong c?a s? k. N?u kh�ng t?n t?i s? �m n�o output 0.
V� d?:
o	V?i arr = [-8, 2, 3, -6, 10], k = 2 th� c�c c?a s? l?n l??t ch?a c�c gi� tr?: [-8, 2], [2, 3], [3, -6], [-6, 10] n�n k?t qu? tr? v? s? c� d?ng firstNegative(arr, k) = [-8, 0, -6, -6]
*/
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
queue<int> firstNegative(vector<int> v, int k)
{
	queue<int> Que;
	int t=0;
	for(int i=0;i<v.size()-k+1;i++)
	{
	   
	   for(int j=i;j<i+k;j++)
	   {
	   	if(v[j]<0)
	   	{
	   		Que.push(v[j]);
	   		break;
		   }
		else 
		t++;
	   }
	   if(t==k)
	   {
	   	  Que.push(0);
	   }
	}
	return Que;
}
int main()
{
  int k=2;
  vector<int> v= {-8, 2, 3, -6, 10};
  queue<int> Que= firstNegative(v,k);
  while(!Que.empty())
{
	cout<<Que.front()<<" ";
	Que.pop();
   }   
}


