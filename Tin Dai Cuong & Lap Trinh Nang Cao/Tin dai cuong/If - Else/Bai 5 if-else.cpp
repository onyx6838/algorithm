/* cho 3 diem A(x1,y1) B(x2,y2) C(x2,y2) tinh S tam giac co 3 dinh la 3 diem neu co */
#include<stdio.h>
#include<math.h>
main (){
	float a,b,c,d,e,f,AB,BC,CA,s,C;
	scanf ("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	AB=sqrt(pow(c-a,2)-pow(d-b,2));
	BC=sqrt(pow(e-c,2)-pow(f-d,2));
	CA=sqrt(pow(a-e,2)-pow(b-f,2));
	if (AB+BC > CA || AB+CA>BC || BC+CA>AB)
		{
			printf("3 canh tam giac");
			C=(AB+BC+CA)/2;
			s=sqrt(C*(C-AB)*(C-BC)*(C-CA));
			printf("\n S tam giac la %f",s);
		}
	else 
		printf("khong thoa man");
}
