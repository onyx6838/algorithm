#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
struct diem
{
	int x, y;
};
typedef struct diem DIEM;
 
void nhap(int *, DIEM **, FILE *);
void xuat(int, DIEM *, FILE *);
float khoangcach(DIEM, DIEM);
void xa_O(int, DIEM *, FILE *);
void duong_gap_khuc(int, DIEM *, FILE *);
 
int main() {
	char ten[100];
	printf("Nhap ten file can mo: "); //file minh tao san ten la: "input7.1.txt"
	fflush(stdin);
	gets(ten);
	FILE *fi = fopen(ten, "r");
	FILE *fo = fopen("output7.1.txt", "w");
	if (!fi || !fo) return !printf("Khong tim thay tep!");
 
	int n;
	DIEM *a;
	nhap(&n, &a, fi);
	if (n <= 0) return !fprintf(fo, "Day diem khong hop le!");
	xuat(n, a, fo);
 
	xa_O(n, a, fo);
	duong_gap_khuc(n, a, fo);
 
	free(a);
	fclose(fi);
	fclose(fo);
	return 0;
}
 
void nhap(int *n, DIEM **a, FILE *f = stdin) 
{
	fscanf(f, "%d", n);
	*a = (DIEM *) calloc(*n, sizeof(DIEM));
	for (int i = 0; i < *n; ++i)
	{
		fscanf(f, "%d%d", &(*a)[i].x, &(*a)[i].y);
	}
}
 
void xuat(int n, DIEM *a, FILE *f = stdout) {
	fprintf(f, "Day diem vua nhap la:\n");
	for (int i = 0; i < n; ++i)
	{
		fprintf(f, "%d\t%d\n", a[i].x, a[i].y);
	}
}
 
float khoangcach(DIEM a, DIEM b) {
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
 
void xa_O(int n, DIEM *a, FILE *f = stdout) 
{
	int max, t;
	DIEM O; O.x = 0; O.y = 0;
	max = khoangcach(a[0], O); t = 0;
	for (int i = 1; i < n; ++i)
	{
		if (max < khoangcach(a[i], O)) 
		{
			max = khoangcach(a[i], O);
			t = i;
		}
	}
	fprintf(f, "\nDiem xa goc toa do nhat la: %d\t%d", a[t].x, a[t].y);
}
 
void duong_gap_khuc(int n, DIEM * a, FILE *f = stdout) {
	float s;
	s = khoangcach(a[n - 1], a[0]);
	for (int i = 1; i < n - 2; ++i)
	{
		s += khoangcach(a[i], a[i + 1]);
	}
	fprintf(f, "\nDo dai duong gap khuc la: %.2f", s);
}
