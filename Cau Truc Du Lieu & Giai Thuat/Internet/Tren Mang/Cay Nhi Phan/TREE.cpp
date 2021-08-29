#include"iostream"
using namespace std;
struct node
{
	int data;
	struct node *pLeft;
	struct node *pRight;
};
typedef struct node NODE;
typedef NODE* TREE;
void KhoiTaoCay(TREE &t)
{
	t=NULL;//rong
}
void ThemNodeVaoCay(TREE &t,int x)
{
	if(t==NULL)	//neu cay rong
	{
		NODE *p=new NODE;	//khoi tao 1 node de them vao cay
		p->data=x;			//them du lieu x vao data
		p->pLeft=NULL;
		p->pRight=NULL;
		t=p;				//node p la node goc <=> x chinh la node goc
	}
	else	//cay co ton tai phan tu
	{
		//phan tu them vao ma nho hon node goc -> them vao ben trai
		if(t->data > x)
		{
			ThemNodeVaoCay(t->pLeft,x);//duyet qua trai de them phan tu x
		}
		//phan tu them vao ma lon hon node goc -> them vao ben phai
		else if(t->data < x)
		{
			ThemNodeVaoCay(t->pRight,x);//duyet qua phai de them phan tu x
		}	
	}
}

//void visit(NODE *p)
//{
//	cout<<p->data<<" ";
//}

void DuyetNLR(TREE t)//,void (visit)(NODE *p)
{
	//Cay con phan tu thi tiep tuc duyet
	if(t!=NULL)
	{
		cout<<t->data<<" ";
		DuyetNLR(t->pLeft);//duyet qua trai
		DuyetNLR(t->pRight);//duyet qua phai
	}
}

void DuyetNRL(TREE t)
{
	//Cay con phan tu thi tiep tuc duyet
	if(t!=NULL)
	{
		cout<<t->data<<" ";//xuat du lieu trong node
		DuyetNRL(t->pRight);//duyet qua phai
		DuyetNRL(t->pLeft);//duyet qua trai
	}
}

void DuyetLNR(TREE t)
{
	//Cay con phan tu thi tiep tuc duyet
	if(t!=NULL)
	{
		DuyetLNR(t->pLeft);//duyet qua trai
		cout<<t->data<<" ";//xuat du lieu trong node
		DuyetLNR(t->pRight);//duyet qua phai
	}
}

void DuyetRNL(TREE t)
{
	//Cay con phan tu thi tiep tuc duyet
	if(t!=NULL)
	{
		DuyetRNL(t->pRight);//duyet qua phai
		cout<<t->data<<" ";//xuat du lieu trong node
		DuyetRNL(t->pLeft);//duyet qua trai
	}
}

void DuyetLRN(TREE t)
{
	//Cay con phan tu thi tiep tuc duyet
	if(t!=NULL)
	{
		DuyetLRN(t->pLeft);//duyet qua trai
		DuyetLRN(t->pRight);//duyet qua phai
		cout<<t->data<<" ";//xuat du lieu trong node	
	}
}

void DuyetRLN(TREE t)
{
	//Cay con phan tu thi tiep tuc duyet
	if(t!=NULL)
	{
		DuyetRLN(t->pRight);//duyet qua phai
		DuyetRLN(t->pLeft);//duyet qua trai
		cout<<t->data<<" ";//xuat du lieu trong node
	}
}

//So cac so nguyen to co trong TREE
bool KiemTraSoNguyenTo(int x)
{
	if(x<2)	return false;
	else
	{
		if(x==2)	return true;
		else
		{
			if(x%2==0)	return false;
			else
			{
				for(int i=2;i<x;i++)
					if(x%i==0)	return false;
			}
		}
	}
	return true;
}
//co the khai bao bien cuc bo int dem=0; khi ctrinh thuc hien se tra gtri va luu lai 
void SoLuongSoNguyenTo(TREE t,int &dem)
{
	if(t!=NULL)
	{
		//Xu li data
		if(KiemTraSoNguyenTo(t->data)==true)
		{
			dem++;
		}
		//Duyet qua tung NODE trong cay trai va phai
		SoLuongSoNguyenTo(t->pLeft,dem);
		SoLuongSoNguyenTo(t->pRight,dem);
	}
}

NODE *Timkiem(TREE t,int x)
{
	if(t==NULL)	 return NULL;
	else
	{
		//Phan tu tim kiem nho hon node goc thi duyet
		//(de quy) sang trai de tim
		if(x< t->data)	Timkiem(t->pLeft,x);
		else if(x>t->data)	Timkiem(t->pRight,x);//duyet sang ben phai
		else return t;//tra ve node can tim kiem t->data==x	
	}
}
void Node_Co_2_Con(TREE t)
{
	if(t!=NULL)
	{
		//xu li
		if(t->pLeft!=NULL && t->pRight!=NULL)//Co 2 node trai va phai
		{
			cout<<t->data<<" ";	
		}	
		Node_Co_2_Con(t->pLeft);//Duyet sang cay con trai cua node hien tai
		Node_Co_2_Con(t->pRight);//Duyet sang cay con phai cua node hien tai
	}
}
void Node_Co_1_Con(TREE t)
{
	if(t!=NULL)
	{
		//xu li
		//Chi co node left hoac node right
		if((t->pLeft!=NULL && t->pRight==NULL) || (t->pLeft==NULL && t->pRight!=NULL))
		{
			cout<<t->data<<" ";	
		}	
		Node_Co_1_Con(t->pLeft);//Duyet sang cay con trai cua node hien tai
		Node_Co_1_Con(t->pRight);//Duyet sang cay con phai cua node hien tai
	}
}
void Node_La(TREE t)
{
	if(t!=NULL)
	{
		//xu li
		//Khong co ca 2 node trai va phai
		if(t->pLeft==NULL && t->pRight==NULL)//ko co 2 node trai va phai
		{
			cout<<t->data<<" ";	
		}	
		Node_La(t->pLeft);//Duyet sang cay con trai cua node hien tai
		Node_La(t->pRight);//Duyet sang cay con phai cua node hien tai
	}
}

// hàm tìm node the mang
void DiTimNodeTheMang(TREE &X, TREE &Y) /// NODE Y là node the mang cho node can xóa 
//- node này se dam nhan nhiem vu tìm ra node trái nhat(TÌM NODE TRÁI NH?T CÂY CON PHAI)
//- hoac phai nhat(TÌM NODE PHAI NHAT CUA CÂY CON TRÁI)
{
	// CÁCH 1: TÌM NODE TRÁI NHAT CUA CÂY CON PHAI
	// duyet sang bên trái nhat
	if (Y->pLeft != NULL)
	{
		DiTimNodeTheMang(X, Y->pLeft);// tìm ra node trái nhat ?
	}
	else // tìm ra duoc node trái nhat roi
	{
		X->data = Y->data; // cap nhat cái data cua node can xóa chính là data cua node the mang
		X = Y; // cho node X(là node mà chúng ta se di xóa sau này) tro den node the mang 
		//==> ra khoi hàm thì ta se xóa node X
		Y = Y->pRight; // ban chat cho này chính là cap nhat lai moi liên ket cho node cha cua node the mang
		//(mà chúng ta se xóa) voi node con cua node the mang	(NULL)
	}

	//// CÁCH 2: TÌM NODE PHAI NHAT CUA CÂY CON TRÁI
	//// duyet sang bên phai
	//if (Y->pRight != NULL)
	//{
	//	DiTimNodeTheMang(X, Y->pRight);// tìm ra node phai nhat ?
	//}
	//else // tìm ra duoc node phai nhat roi nek..
	//{
	//	X->data = Y->data; // cap nhat cái data cua node can xóa chính là data cua node the mang
	//	X = Y; // cho node X(là node mà chúng ta se di xóa sau này) tro den node the mang
	// ==> ra khoi hàm thì ta se xóa node X
	//	Y = Y->pLeft; // ban chat cho này chính là cap nhat lai moi liên ket cho node cha cua node the mang
	//(mà chúng ta se xóa) voi node con cua node the mang	
	//}
}

void XoaNode(TREE &t,int data)
{
	//neu nhu cay dang rong
	if(t==NULL)
	{
		return;//ket thuc ham
	}
	else 
	{
		//neu nhu data nho hon node goc
		if(data< t->data)
		{
			XoaNode(t->pLeft,data);	//Duyet sang nhanh trai cua cay 	
		}
		else if(data > t->data)
		{
			XoaNode(t->pRight,data);//Duyet sang nhanh phai cua cay 
		}
		else //data == t->data da tim ra node can xoa
		{
			NODE *X=t;//NODE the mang - se xoa no sau
			//Neu nhu nhanh trai bang NULL -> day la cay con phai (cay co 1 con)
			if(t->pLeft==NULL)
			{
				t=t->pRight;//duyet sang phai cua node can xoa ......
			}
			else if(t->pRight==NULL)
			{
				t=t->pLeft;
			//duyet sang trai cua node can xoa
			//cap nhat moi lien ket giua node cha cua node can xoa vs node con cua node can xoa				
			}
			else // node c?n xóa là node có 2 con
			{
			//! Khong nen truyen vao luon ( NODE *Y=t->pRight || t->pLeft)
			// CÁCH 1: Tìm node trái nhat cua cây con phai(cây con phai cua cái node can xóa)
				DiTimNodeTheMang(X, t->pRight);
			// CÁCH 2: Tìm node phai nhat c?a cây con trái(cây con trái cua cái node can xóa)
				//DiTimNodeTheMang(X, t->pLeft);
			}
			delete X;//xoa node can xoa
		}
	}
}
void Menu(TREE &t)
{
	while(true)
	{
	system("cls");
	cout<<"1. Nhap du lieu vao cay nhi phan ";
	cout<<"\n2. Xuat du lieu cua cay nhi phan (NLR)";
	cout<<"\n3. Xuat du lieu cua cay nhi phan (NRL)";
	cout<<"\n4. Xuat du lieu cua cay nhi phan (LNR)";
	cout<<"\n5. Xuat du lieu cua cay nhi phan (RNL)";
	cout<<"\n6. Xuat du lieu cua cay nhi phan (LRN)";
	cout<<"\n7. Xuat du lieu cua cay nhi phan (RLN)";
	cout<<"\n8. Dem so cac so nguyen to co trong cay: ";
	cout<<"\n9. Tim kiem phan tu trong cay: ";
	cout<<"\n10. Node co 2 con";
	cout<<"\n11. Node co 1 con";
	cout<<"\n12. Node La";
	cout<<"\n13. Xoa (Node la va Node co 1 con) ";
	cout<<"\n0. End";
	
	int luachon;
	cout<<"\nLua chon: ";cin>>luachon;
	if(luachon<0 || luachon >13)
	{
		cout<<"Lua chon khong hop le ";
		system("pause");
	}
	else if(luachon==1)
	{
		int x;
		cout<<"Nhap so nguyen x: ";
		cin>>x;
		ThemNodeVaoCay(t,x);
	}
	else if(luachon==2)
	{
		DuyetNLR(t);
		system("pause");
	}
	else if(luachon==3)
	{
		DuyetNRL(t);
		system("pause");
	}
	else if(luachon==4)
	{
		DuyetLNR(t);
		system("pause");
	}
	else if(luachon==5)
	{
		DuyetRNL(t);
		system("pause");
	}
	else if(luachon==6)
	{
		DuyetLRN(t);
		system("pause");
	}
	else if(luachon==7)
	{
		DuyetRLN(t);
		system("pause");
	}
	else if(luachon==8)
	{
		int dem=0;
		SoLuongSoNguyenTo(t,dem);
		cout<<"So luong so nguyen to la : "<<dem;
		system("pause");
	}
	else if(luachon==9)
	{
		int x;
		cout<<"\nNhap gtri can tim: ";cin>>x;
		NODE *p=Timkiem(t,x);
		if(p==NULL)	cout<<"Khong co ptu "<<x<<" trong cay";
		else cout<<"Co ptu "<<x<<" trong cay";
		system("pause");
	}
	else if(luachon==10)
	{
		cout<<"\nNode 2 con la: ";
		Node_Co_2_Con(t);
		system("pause");
	}
	else if(luachon==11)
	{
		cout<<"\nNode 1 con la: ";
		Node_Co_1_Con(t);
		system("pause");
	}
	else if(luachon==12)
	{
		cout<<"\nNode La : ";
		Node_La(t);
		system("pause");
	}
	else if(luachon==13)
	{
		int x;
		cout<<"\nNhap gia tri can xoa: ";
		cin>>x;
		XoaNode(t,x);
	}
	else break;
	}
}
int main()
{
	TREE t;
	KhoiTaoCay(t);
	Menu(t);
	system("pause");
	return 0;
}
