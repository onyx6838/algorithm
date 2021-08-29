// C++ program to sort an array using bucket sort 
#include <iostream> 
#include <algorithm> 
#include <vector> 
using namespace std; 
  
// Function to sort arr[] of size n using bucket sort 
void bucketSort(int arr[], int n, int K) 
{ 
    // 1) Create n empty buckets 
     int bucket_size = K;
	 vector<float> b[bucket_size];
     
    // 2) Put array elements in different buckets 
    for (int i=0; i<n; i++)
    { 
       int bi = arr[i] % K; // Index in bucket 
       b[bi].push_back(arr[i]);
    } 

    // 3) Sort individual buckets 
    for (int k=0; k<bucket_size; k++) {
    	int m = b[k].size();
    	for (int i = 0; i < m-1; i++)
    		for (int j = i + 1; j < m; j++)
		    	if (b[k][i] > b[k][j]){
		        	swap(b[k][i], b[k][j]);
		    	}
	}
	
    // 4) Concatenate all buckets into arr[] 
    int index = 0; 
    for (int i = bucket_size - 1; i >=0 ; i--) 
        for (int j = 0; j < b[i].size(); j++) 
          arr[index++] = b[i][j]; 
} 
  
int main() 
{ 
    int arr[] = {29, 80, 36, 34, 65, 94, 6};
    int k = 15;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bucketSort(arr, n, k);
  
  	cout<<"Original array:"<<endl;
    for (int i=0; i<n; i++) 
       cout << arr[i] << " ";

	cout<<endl<<"Special weights:"<<endl;
    for (int i=0; i<n; i++) 
       cout << arr[i] % k << " ";
       
    cout<<endl<< "Sorted array is \n"; 
    for (int i=0; i<n; i++) 
       cout << arr[i] << " "; 
    return 0; 
} 


