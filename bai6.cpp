#include<stdio.h>

int main()
{
    int i, a, b, c;
    for(i=100; i<=999; i++) 
	{
        a = i/100;
        b = (i%100)/10;
		c = i%10;
        if(a+b+c == 9)
			printf("%d%d%d ",a,b,c);
    }
    //HUE
}
