#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float T=0;
	printf("Nhap n = ");scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2 !=0){
			T += sqrt(i);
		}
	}
	printf("T =  %0.2f",T);
}
