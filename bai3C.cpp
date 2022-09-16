#include <stdio.h>
	
	int main()
	{
		//int x,y,z;
		for(int x=1;x<=20;x++)
		for(int y=1;y<=33;y++)
		for(int z=3;z<=100;z++)
		if((x+y+z==100)&&(x*5+y*3+z/3==100)){
			printf("Trau dung la:%d ",x);
			printf("Trau nam la:%d \n",y);
			printf("Trau gia la:%d \n",z);
			}
		return 0;	
	}

	//Khong biet suaaaa (Lethanh)
