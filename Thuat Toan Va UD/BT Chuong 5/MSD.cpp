#include"bits/stdc++.h"
using namespace std;
void sort (vector<string> &a, int lo, int hi, int d)
{ // Sort from a[lo] to a[hi], starting at the dth character.
	int N = a.size();
	vector<string> aux(N);
	
	if (hi <= lo) return;
	/*{ insertionSort(a, lo, hi, d); return; } */
	vector<int> count(256+1); // Compute frequency counts.
	for (int i = lo; i < hi; i++){
		count[a[i].at(d) + 2]++;
	}
	for (int r = 0; r < 256+1; r++){ // Transform counts to indices.
	
		count[r+1] += count[r];
	}
	for (int i = lo; i < hi; i++) // Distribute.
		aux[count[a[i].at(d) + 1]++] = a[i];
	for (int i = lo; i < hi; i++) // Copy back.
		a[i] = aux[i - lo];
	// Recursively sort for each character value.
	for (int r = 0; r < 256; r++) { //R = 256;
		if (lo + count[r+1] - 1 >= lo + count[r])
			sort (a, lo + count[r], lo + count[r+1] - 1, d+1);
	}
}
int main(){
	vector<string> s={"she","sells","seashells","by","the","sea","shore","the","shells","she"
	, "sells","are","surely","seashells"};
	int N=s.size();
	sort(s,0,N,0);
	for(string t:s) cout<<t<<" ";
}
