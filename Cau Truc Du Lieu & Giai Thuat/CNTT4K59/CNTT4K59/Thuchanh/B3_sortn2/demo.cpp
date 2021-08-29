#include<bits/stdc++.h>
using namespace std;
#include"sortnn.cpp"
#include"array.cpp"
using namespace std;
int compare0(float x, float y){
   if (x<y)
      return 1;
   else
      return 0;     
}
int compare1(float x, float y){
   if (x>y)
      return 1;
   else
      return 0;     
}
int main(){
     float *a;
     int n;
     system("cls");
     cout<<"Nhap n=";
     cin>>n;
     a =  new float[n];
     InputArr(a, n, "a");
     system("cls");
     cout<<"Day so ban dau:";
      PrintArr(a,n,' ');
      BubbleSort(a,n,compare0);
     //SelectionSort(a,n,compare1);
     //InsertionSort(a,n,compare);
     //cout<<"\nDay so duoc sep:";
     cout<<"\n";
     PrintArr(a,n,' ');     
     BubbleSort(a,n,compare1);
     cout<<"\n";
     PrintArr(a,n,'\t');
     return 0;
}



