#include<stdio.h>
#include<math.h>
int main()
{
	int n,x;
	float T=100;
	printf("Nhap n = ");scanf("%d",&n);
	printf("Nhap x = ");scanf("%d",&x);
	for(int i=1;i<=n;i++){
		T += (pow(-1,i+1)*x)/(10*i);
	}
	printf("s =  %1.2f",T);
}
