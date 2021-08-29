#include"iostream"
#include"string.h"
using namespace std;
class MatHang
{
	private:
		string mahang,tenhang,nsx;	// kieu chuoi dung getline
		int soluong,dongia;	// dung cin>>
	public:
		void nhap()
		{
			cout<<"\nNhap ma hang: ";
			cin.ignore(1);	// cho phep nhap chuoi theo dong
			getline(cin,mahang);	// get line nhap vao mahang theo dong`
			cout<<"Nhap ten hang: ";
			getline(cin,tenhang);	// nhap ten hang
			cout<<"Nhap nha san xuat: ";
			getline(cin,nsx);	// nhap nsx
			cout<<"Nhap so luong: ";
			cin>>soluong;	// nhap so luong
			cout<<"Nhap don gia: ";
			cin>>dongia;	// nhap don gia
		}
		void xuat()
		{
			cout<<"Ma hang: "<<mahang;	// hien thi ra man hình
			cout<<"\nTen hang: "<<tenhang; // hien thi ra man hình
			cout<<"\nNSX: "<<nsx; // hien thi ra man hình
			cout<<"\nSo luong: "<<soluong;	// hien thi ra man hình
			cout<<"\nDon gia: "<<dongia;	// hien thi ra man hình
		}
		int getDonGia() {return dongia;}	// lay don gia (return dongia là tra ve dongia trong class MatHang)
		string getMaHang(){return mahang;} // lay ma hang (return mahang là tra ve mahang trong class MatHang)
		string getTenHang(){return tenhang;}// lay ten hang (return tenhang là tra ve tenhang trong class MatHang)
};
class MayTinh:public MatHang	// dan xuat' (ke' thua) tu clss MatHang  (:public MatHang)
{
	private:
		string loaiCPU,hedieuhanh;	// thuoc tinh them tu lop MayTinh
		int trongluong;	// thuoc tinh them
	public:
		void nhap()
		{
			MatHang::nhap();	// su dung ham nhap tu lop cha (lop MatHang) dung MatHang:: de goi cha  -> MatHang::nhap() 
			cout<<"Nhap loai CPU: ";	cin>>loaiCPU;	// nhap
			cout<<"Nhap he dieu hanh: ";cin>>hedieuhanh;
			cout<<"Nhap trong luong: ";	cin>>trongluong;
		}
		void xuat()
		{
			MatHang::xuat();	// goi ham` xuat cua lop cha
			cout<<"\nLoai CPU: "<<loaiCPU;	// xuat
			cout<<"\nHe dieu hanh: "<<hedieuhanh;
			cout<<"\nTrong luong: "<<trongluong<<endl;
		}
		string getHeDieuHanh(){return hedieuhanh;}	// lay ra ten he dieu hanh
};
int main()
{
	int n;
	cout<<"n = ";cin>>n;	// nhap vao n
	MayTinh *a;
	a=new MayTinh[n+1];	// khoi tao mang MayTinh gom` n+1 phan` tu
	// Cau 1
	for(int i=1;i<=n;i++)	// nhap phan tu thu [i] trong mang? a
	{
		cout<<"May T "<<i<<" : ";
		a[i].nhap(); // ham nhap
	}
	//
	cout<<"\n-----------Bang Thong tin vua nhap vao---------\n";
	for(int i=1;i<=n;i++)
	{
		a[i].xuat();	// xuat ra
		cout<<"--------"<<endl;
	}
	// Cau 2
	string timkiem;	// khoi tao  bien timkiem
	cout<<"\n-----------Nhap ma hang hoac ten hang can tim-----------\n";
	cin>>timkiem;	// nhap vao
	for(int i=1;i<=n;i++)
	{
		// ham` getMaHang tu class MatHang , getTenHang tu class MatHang
		// neu a[i] lay ma~ hang` hoac tenhang trung` voi timkiem thi xuat ra thong tin ( || - hoac tim theo tenhang hoac theo mahag)
		if(a[i].getMaHang() == timkiem || a[i].getTenHang() == timkiem)	a[i].xuat();	// xuat
	}
	// Cau 3
	int max = INT_MIN;	// khoi tao max = am^ vo cung` (so rat lon' = -999999999999999) de so sanh
	for(int i=1;i<=n;i++)
	{
		// neu maytinh co he dieu hanh la win va dongia lon hon max thi gan' gtri don gia vao max
		if(a[i].getHeDieuHanh() == "windows" && a[i].getDonGia() > max)	max = a[i].getDonGia();	// gan' lai gtri dongia vao max
	}
	// sau vong` for dc gtri max cua may tinh dung he dieu hanh win
	cout<<"\n-----------Danh sach may tinh chay windows co gia cao nhat-----------\n";
	for(int i=1;i<=n;i++)
	{
		// maytinh dung win va` co don gia  = max thi xuat ra thong tin
		if(a[i].getHeDieuHanh() == "windows" && a[i].getDonGia() == max)	a[i].xuat();
	}
}
