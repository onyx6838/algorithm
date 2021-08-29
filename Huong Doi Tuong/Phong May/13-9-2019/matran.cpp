//B1:
//#include"iostream"
//using namespace std;
//typedef struct SquMatrix{
//	int n;
//	float a[10][10];//**a;
//};
//SquMatrix nhapmt()
//{
//	SquMatrix A;
//	cout<<"nhap co cua MT";cin>>A.n;
//	for(int i=1;i<=A.n;i++)
//		for(int j=1;j<=A.n;j++)
//		{
//			cout<<"nhap hang"<<i<<" cot "<<j<<":";
//			cin>>A.a[i][j];
//		}
//	return A;
//}
//void inmt(const SquMatrix &A)
//{
//	for(int i=1;i<=A.n;i++)
//	{
//		for(int j=1;j<=A.n;j++)	cout<<A.a[i][j]<<"\t";
//		cout<<endl;
//	}
//}
//float cheo(const SquMatrix A)
//{
//	float cheo=1;
//	for(int i=1;i<=A.n;i++)
//		for(int j=1;j<=A.n;j++)
//			cheo*=A.a[i][j];
//	return cheo;		
//}
////Kiem tra MT co la tam giac tren khong
//int checkTGT(const SquMatrix A)
//{
//	int demK0=0,dem0=0;
//	for(int i=1;i<=A.n;i++)
//		for(int j=1;j<=A.n;j++)
//		{
//			if(i<j && A.a[i][j]!=0)	demK0++;
//			if(i>j && A.a[i][j]!=0)	dem0++;
//		}
//		if(dem0!=0 || demK0==0) return 0;
//		return 1;
//}
//int main ()
//{
//	SquMatrix X;
//	X=nhapmt();
//	inmt(X);
//	int k=checkTGT(X);
//	if(k==0)	cout<<"\nDay k phai la MT TGT";
//	else cout<<"La MT TGT";
//	float z=cheo(X);
//	cout<<"\n"<<z;
//}



//Cap phat dong MT
#include"iostream"
using namespace std;
typedef struct SquMatrix{
	int n;
	float **a;
};
SquMatrix nhapmt()
{
	SquMatrix A;
	cout<<"nhap co cua MT";cin>>A.n;
	A.a=new float *[(A.n+1)*(A.n+1)];
	for(int i=1;i<=A.n;i++)
		{
			A.a[i]=new float[(A.n+1)];
			for(int j=1;j<=A.n;j++)
			{
				cout<<"nhap hang"<<i<<" cot "<<j<<":";
				cin>>A.a[i][j];
			}
		}
	return A;
}
void inmt(const SquMatrix &A)
{
	for(int i=1;i<=A.n;i++)
	{
		for(int j=1;j<=A.n;j++)	cout<<A.a[i][j]<<"\t";
		cout<<endl;
	}
}
float cheo(const SquMatrix A)
{
	float cheo=1;
	for(int i=1;i<=A.n;i++)
			cheo*=A.a[i][i];
	return cheo;		
}
//Kiem tra MT co la tam giac tren khong
int checkTGT(const SquMatrix A)
{
	int demK0=0,dem0=0;
	for(int i=1;i<=A.n;i++)
		for(int j=1;j<=A.n;j++)
		{
			if(i<j && A.a[i][j]!=0)	demK0++;
			if(i>j && A.a[i][j]!=0)	dem0++;
		}
		if(dem0!=0 || demK0==0) return 0;
		return 1;
}
void cheophu(const SquMatrix A)
{
	float tong=0;
	int dem;
	for(int i=1;i<=A.n;i++)
		for(int j=1;j<=A.n;j++)
			if(i+j==A.n-1)
			{
				tong+=A.a[i][j];
				dem++;
			}		
	cout<<"TBC cheo phu"<<tong/dem;	
}
int main ()
{
	SquMatrix X;
	X=nhapmt();
	inmt(X);
	int k=checkTGT(X);
	if(k==0)	cout<<"\nDay k phai la MT TGT";
	else cout<<"La MT TGT";
	float z=cheo(X);
	cout<<"\n"<<z;
	cheophu(X);
	delete(X.a);
}
