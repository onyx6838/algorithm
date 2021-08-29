/* nhap diem a cua hoc sinh va in ra sap xep loai HS a>= 9 xuat sac, 8<= a<9 gioi,
 7<= a <8 kha, 6<=a<7 TB kha, 5<=a<6 TB, con lai yeu */
#include<stdio.h>
main (){
	float a;
	printf("Diem: ");
	scanf ("%f",&a);
	if (a >= 9)
		printf("HS xuat sac");
	else if (8 <= a && a< 9 )
		printf("HS gioi");
	else if ( 7 <= a && a< 8)	
		printf("HS kha");
	else if (6 <= a && a< 7)
		printf("HS TB kha");
    else if (5 <= a && a< 6)
		printf("HS TB");
	else 
	    printf("HS yeu");					
}


