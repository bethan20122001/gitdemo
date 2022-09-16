#include<stdio.h>

int main()
{
	int n;
	int A;
	printf("Nhap n = ");scanf("%d",&n);
    for(int i=1;i<=n;i++){
    	A += i*(i+1);
	}
	printf("A =  %d",A);
}
