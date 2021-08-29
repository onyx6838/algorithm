// thong tin sinh vien
#include<stdio.h>
#include<string.h>
struct Sinhvien{
	char hoten[30];
	int MaSV;
	float toan;
	float ly;
	float hoa;
}SV[100];
main(){
	int n,i;
	char ten[30];
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{
		printf("Ten SV[%d]: ",i);fflush(stdin);
		gets(SV[i].hoten);
		printf("\nMaSV");scanf("%d",&SV[i].MaSV);
		printf("\nToan");scanf("%f",&SV[i].toan);
		printf("\nLy");scanf("%f",&SV[i].ly);
		printf("\nHoa");scanf("%f",&SV[i].hoa);
		}
	for(i=1;i<=n;i++)
		{
			if (SV[i].toan < 5|| SV[i].hoa<5||SV[i].ly<5)
				printf ("SV thi lai %s",SV[i].hoten);
			else printf("k co thi lai");	
		}
	printf("\nTen bki ");
	fflush(stdin);
	gets(ten);
	for(i=1;i<=n;i++)
		if (stricmp(ten,SV[i].hoten) ==0 )
			printf("dung");	
			else printf("sai");	
			
}



