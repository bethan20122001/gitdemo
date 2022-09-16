#include<stdio.h>
int main(){
	float a,b;
	float x;
	printf("Nhap vao so a: ");
	scanf("%f",&a);
	printf("Nhap vao so b: ");
	scanf("%f",&b);
	if(a==0){
		if(b==0)
		printf("Phuong trinh co vo so nghiem");
		else
		printf("Phuong trinh vo nghiem");
		
		}else
		{
			x=-b/a;
			printf("Nghiem cua phuong trinh la: %f",x);
			}
	}
