#include<bits/stdc++.h>
using namespace std;
struct Dathuc
{
	int n;	 	//bac da thuc
	float *a;   //cac he so da thuc
	Dathuc()  //co the co nhieu ham tao
	{
		n=0;
		a=NULL;
	}
	~Dathuc() {if(a!=NULL) delete [] a;}//chi khi co cap phat bo nho dong moi can
	void nhap()
	{
		cout<<"Bac da thuc : ";cin>>n;
		a=new float [n+1];
		for(int i=0;i<=n;i++) cin>>a[i];
	}
	void xuat(string tb="")
	{
		cout<<"\n"<<tb<<"\n";
		for(int i=0;i<=n;i++) cout<<a[i]<<" ";
	}
};
int main()
{
	Dathuc p; //Goi den ham tao
	p.nhap();
	p.xuat("Da thuc vua nhap");
	Dathuc *q=new Dathuc(); //goi ham tao
	q->nhap();
	q->xuat("da thuc Q");
	delete q;
}


