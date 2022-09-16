#include<stdio.h>

int UCLN(int a, int b) 
{
    if (b == 0) 
	return a;
    return UCLN(b, a%b);
}

int main()
{
    int a,b;
    printf("Nhap a = ");scanf("%d",&a);
    printf("Nhap b = ");scanf("%d",&b);
    printf("\nUCLN cua (%d, %d) = %d",a,b,UCLN(a,b));
}
// hihihihihihi Thanh neeee
