#include<bits/stdc++.h>
using namespace std;
void sort(vector<string> &a, int lo, int hi, int d) {
	if (hi <= lo +1) return;
	int lt = lo, gt = hi;
	int v = a[lo].at(d) + 1;
	int i = lo + 1;
	while (i <= gt) 
	{
		int t = a[i].at(d) + 1;
		if (t < v)  swap(a[lt++],a[i++]);//Ð?i ch? hai xâu a[lt] và a[i] exch(a, lt++, i++)
		else if (t > v) swap(a[i],a[gt--]); //Ð?i ch? hai xâu a[i] và a[gt] exch(a, i, gt--)
		else i++;
	}
	// a[lo..lt-1] < v = a[lt..gt] < a[gt+1..hi]
	sort(a, lo, lt-1, d);
	if (v >= 0) sort(a, lt, gt, d+1);
	sort(a, gt+1, hi, d);
}
int main()
{
	vector<string> arr = {"shegg","she","shells","are","by","sally","the"};
	sort(arr,0,arr.size(),0);
	for(auto t:arr)	cout<<t<<endl;
}
