/*Ma tran viet cac ham
- Cap phat bo nho dong cho ma tran vuong
- Nhap ma tran vuong n*n tu file
- Xuat ma tran ra file
- Tinh tich cac phan tu tren duong cheo chinh
- Kiem tra ma tran co la tam giac tren khong
- Trung binh cong nhung phan tu le nam duoi duong cheo phu
- Tong cac phan tu nam tren hang chan cot le
- Ham main nhap vao ma tran tu file xuat ma tran va tat ca cac ket qua tinh duoc ra file 
outmatran.txt
*/
//struct matran
//{
//	int n;
//	int **a;
//};
#include<stdio.h>
#include<stdlib.h>
 
int **Alloc(int n)  						//cap phat bo nho dong cho ma tran n*n
{
	int **A=(int **)calloc(n,sizeof(int *)); 				//Cap phat mang cac con tro
	for(int i=0;i<n;i++) A[i]=(int *)calloc(n,sizeof(int)); //moi con tro cap phat rieng mang so
	return A;
}
void Free(int ***A,int n)  //xoa bo nho nen thay doi A -> them dau *
{
	for(int i=0;i<n;i++) free((*A)[i]);
	free(*A);
}
void Input(int *n,int ***A,FILE *f=stdin)  //thay doi A
{
	fscanf(f,"%d",n);
	(*A)=Alloc(*n);
	for(int i=0;i<*n;i++)
	for(int j=0;j<*n;j++) fscanf(f,"%d",&(*A)[i][j]);	
}
void Output(int n,int **A,FILE *f=stdout)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) fprintf(f,"%5d",A[i][j]);
		fprintf(f,"\n");		
	}
}
//- Tinh tich cac phan tu tren duong cheo chinh
int Tichdc(int n,int **A)
{
	int t=1;
	for(int i=0;i<n;i++) t*=A[i][i];
	return t;
}
//- Kiem tra ma tran co la tam giac tren khong
int KtraTGT(int n,int **A)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<i;j++) if(A[i][j]) return 0;	//	if a[i][j] !=0
	return 1;
}
//- Trung binh cong nhung phan tu le nam duoi duong cheo phu
int TBCle(int n,int **A,float *kq)//ham tra ve co hay khong con kq luu ket qua
{
	int s=0,d=0;
	for(int i=0;i<n;i++)
	for(int j=n-1-i+1;j<n;j++) if(A[i][j]%2)	{s+=A[i][j];d++;}	// for bat dau tu 0 
	if(d) *kq=s/(float)d;		// ep kieu cho d vi` d la int ma` float k chia dc int
	return d?1:0;
}
//- Tong cac phan tu nam tren hang chan cot le
int Tongchanle(int n,int **A)		// do int 0 -> n  phai tinh tong hang le cot chan
{
	int s=0;
	for(int i=1;i<n;i+=2)
	for(int j=0;j<n;j+=2) s+=A[i][j];
	return s;
}
//- Ham main nhap vao ma tran tu file xuat ma tran va tat ca cac ket qua tinh duoc ra file 
int main()
{
	int n,**A;
	FILE *fi=fopen("mt.txt","r");
	FILE *fo=fopen("outmatran.txt","w");
	Input(&n,&A,fi);
	fprintf(fo,"Ma tran\n");	Output(n,A,fo);
	fprintf(fo,"\nTich cac pt tren duong cheo chinh %d",Tichdc(n,A));
	fprintf(fo,KtraTGT(n,A)?"\nMa tran la tam giac tren":"\nMa tran khong tgt");
	float tb;
	int ok=TBCle(n,A,&tb);
	if(ok) fprintf(fo,"\nTBC le %f",tb);
	else fprintf(fo,"\nKhong co so le");
	fprintf(fo,"\nTong cac phan tu nam tren hang chan cot le %d",Tongchanle(n,A));
	fclose(fi);fclose(fo);
	printf("Da xong vui long mo file outmatran.txt de xem ket qua");
}
/*C++
	int **A=new int *[n];
	for(int i=0;i<n;i++) A[i]=new int[n];		cap phat dong kieu C++
	return A;
*/
