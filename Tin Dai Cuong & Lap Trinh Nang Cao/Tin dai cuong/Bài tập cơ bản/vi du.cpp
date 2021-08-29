#include<conio.h>
#include<stdio.h>
#include<string.h>
char timso(char s1[100])
{
            int i, dem =0;
            for(i=0; i<strlen(s1); i++)
            {
                        if(s1[i] > 47 && s1[i] < 58)
                        {
                                    dem++;
                                    printf("%c", s1[i]);
                        }
            }
            if(dem==0)
            {
                        printf("chuoi vua nhap khong co so\n");
            }
           
}
int main()
{
            char s1[100];
            printf("nhap chuoi\n");
            gets(s1);
            timso(s1);
}
