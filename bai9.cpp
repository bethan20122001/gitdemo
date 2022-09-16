#include<stdio.h>
int main()
{
	int n;
	int A=0;
	printf("Nhap n = ");scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			A +=i;
		}
	}
	printf("A =  %d",A);
}
