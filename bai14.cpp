#include<stdio.h>

int main()
{
	int n,s=1;
	printf("Nhap n = ");scanf("%d",&n);
	for(int i=1;i<=n;i++){
		s *= i;
	}
	printf("s =  %d",s);
}
