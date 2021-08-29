#include<bits/stdc++.h>
using namespace std;
class MATRIXSQUARE{
	private:
		int n;
		float **PT;
	public:
		friend istream & operator >> (istream &in, MATRIXSQUARE &A);
		friend ostream & operator << (ostream &out, MATRIXSQUARE A);
		friend void tichDCchinh (MATRIXSQUARE &A);
		friend void tichDCphu (MATRIXSQUARE &A);
		void tongtrenDCchinh();
		void tongduoiDCchinh();
		void TBC();
		MATRIXSQUARE nhan1so (float &x);
};
istream & operator >> (istream &in, MATRIXSQUARE &A)
{
	cout<<"Nhap co cua ma tran vuong: "; in>>A.n;
	while (A.n<=0)
	{
		cout<<"Du lieu nhap vao khong hop le, nhap lai.\nNhap co cua ma tran vuong: ";
		in>>A.n;
	}
	A.PT=new float*[A.n+1];
	int k=1;
	while (k<=A.n)
	{
		A.PT[k]= new float [A.n+1];
		k++;
	}
	int i=1;
	while (i<=A.n)
	{
		int j=1;
		while (j<=A.n)
		{
			cout<<"Nhap phan tu A["<<i<<"]["<<j<<"]: ";
			in>>A.PT[i][j];
			j++;
		}
		i++;
	}
	return in;
}
ostream & operator << (ostream &out, MATRIXSQUARE A)
{
	int l=1;
	while (l<=A.n)
	{
		int m=1;
		while (m<=A.n)
		{
			out<<A.PT[l][m]<<" ";
			m++;
		}
		out<<endl;
		l++;
	}
	return out;
}
void tichDCchinh (MATRIXSQUARE &A)
{
	float s=1;
	int t=1;
	while (t<=A.n)
	{
		int u=1;
		while (u<=A.n)
		{
			if (t==u) s*=A.PT[t][u];
			u++;
		}
		t++;
	}
	cout<<"\nTich cac phan tu nam tren duong cheo chinh la: "<<s;
}
void tichDCphu (MATRIXSQUARE &A)
{
	float s=1;
	int v=1;
	while (v<=A.n)
	{
		int w=1;
		while (w<=A.n)
		{
			if (v+w==A.n+1) s*=A.PT[v][w];
			w++;
		}
		v++;
	}
	cout<<"\nTich cac phan tu nam tren duong cheo phu la: "<<s;
}
void MATRIXSQUARE::tongtrenDCchinh()
{
	float s=0;
	int d=1;
	while (d<=n)
	{
		int e=1;
		while (e<=n)
		{
			if (d<e) s+=PT[d][e];
			e++;
		}
		d++;
	}
	cout<<"\nTong cac phan tu nam phia tren duong cheo chinh la: "<<s;
}
void MATRIXSQUARE::tongduoiDCchinh()
{
	float s=0;
	int f=1;
	while (f<=n)
	{
		int g=1;
		while (g<=n)
		{
			if (f>g) s+=PT[f][g];
			g++;
		}
		f++;
	}
	cout<<"\nTong cac phan tu nam phia duoi duong cheo chinh la: "<<s;
}
void MATRIXSQUARE::TBC()
{
	float s=0;
	int h=1, q=0;
	while (h<=n)
	{
		int p=1;
		while (p<=n)
		{
			s+=PT[h][p];
			p++;
			q++;
		}
		h++;	
	}
	cout<<"\nTrung binh cong cua tat ca cac phan tu cua ma tran la: "<<s/q;
} 
MATRIXSQUARE MATRIXSQUARE:: nhan1so (float &x)
{
	MATRIXSQUARE C;
	C.PT=new float *[n+1];
	int c=1;
	while (c<=n)
	{
		C.PT[c]= new float [n+1];
		c++;
	}
	int a=1;
	while (a<=n)
	{
		int b=1;
		while (b<=n)
		{
			C.PT[a][b]=x*PT[a][b];
			b++;
		}
		a++;
	}
	return C;
}
void squarematrixapp()
{
	MATRIXSQUARE A, C;
	cin>>A;
	cout<<"\nMa tran vua nhap la:\n";
	cout<<A;
	tichDCchinh(A);
	tichDCphu(A);
	A.tongtrenDCchinh();
	A.tongduoiDCchinh();
	A.TBC();
	float x;
	cout<<"\n\nNhap vao mot so thuc: "; cin>>x;
	C=A.nhan1so(x);
	cout<<"Ma tran sau khi nhan voi "<<x<<" la:\n"<<C;
}
void run()
{
	 squarematrixapp();
}
int main()
{
	run();
}

