#include<bits/stdc++.h>
using namespace std;

struct Ngay
{
    int ngay, thang, nam;
};
bool KiemTraNamNhuan(Ngay a)
{
    return (a.nam % 4 == 0 && a.nam % 100 != 0) || (a.nam % 400 == 0);
}
bool KiemTraNamNhuan(int i)
{
    if (i % 4 == 0 && i % 100!=0)
        return true;
    if (i % 400 == 0)
        return true;
    return false;
}
int TimSoNgayTrongThang(Ngay a)
{
    int NgayTrongThang;
    switch(a.thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        NgayTrongThang = 31;
        break;
    case 4: case 6: case 9 : case 11:
        NgayTrongThang = 30;
        break;
    case 2:
        int Check = KiemTraNamNhuan(a);
        if(Check == 1)
        {
            NgayTrongThang = 29;
        }
        else
        {
            NgayTrongThang = 28;
        }
    }
    return NgayTrongThang;
}
void Nhapngay( Ngay a)
{
    do
        {
            cout <<"Nhap nam: ";
            cin >> a.nam;
        } while ( a.nam < 0);
    do
        {
            cout <<"Nhap thang: ";
            cin >> a.thang;
        } while ( a.thang < 1 || a.thang > 12);
    int NgayTrongThang = TimSoNgayTrongThang(a);
    do
        {
            cout <<"Moi nhap ngay: ";
            cin >> a.ngay;
            if ( a.ngay < 1 || a.ngay > NgayTrongThang)
                {
                    cout <<"Moi nhap lai: ";
                }
        }while ( a.ngay < 1 || a.ngay > NgayTrongThang);
}
void Xuatngay (Ngay a)
{
    cout<<a.ngay<<"/"<<a.thang<<"/"<<a.nam<<endl;
}
int main()
{
	Ngay a;
	Nhapngay(a);
	Xuatngay(a);
	bool kt = KiemTraNamNhuan(2016);
	if(kt==true)	cout<<"Nam nhuan ";
	else cout<<"k phai nam nhuan";
}
