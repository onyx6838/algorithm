#include<bits/stdc++.h>
using namespace std;

//Kiem tra so nguyen to
bool isPrime(int n){
	if (n<2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	if (n % i == 0) return false;
	return true;
}

vector<int> superPrimeNumber(int n)
{
    queue<int> q;
    vector<int> v;
    
    //Kiem tra cac so nguyen to nho hon hoac bang n
    for (int i = 2; i <= n, i < 10; i++){
        if (isPrime(i)){
            q.push(i);
        }
    }
    
    //Them lan luot cac so tu 1 den 9 vao hang don vi
    while (!q.empty()){
        for (int i = 1; i <= 9; i++){
            int k = q.front()*10 + i;
            if (k <= n && isPrime(k)){
                q.push(q.front()*10 + i);
            }
        }
        v.push_back(q.front());
        q.pop();
    }

    return v;
}

int main()
{
	int n;
	cout<<"Nhap vao mot so:";
	cin>>n;
	vector<int> spn = superPrimeNumber(n);
	cout<<"Day so sieu nguyen to la:"<<endl;
	for (auto x:spn)
		cout<<x<<" ";
    	
	return 0;
}

