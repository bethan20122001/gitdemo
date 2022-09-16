#include<stdio.h>

//bai5
/// @return 
int main()
{
    int i, j, sum;
    printf("Cac so hoan hao nho hon 100 :");
    for(i = 2; i <= 100; i++)
    {
        sum = 1;
        for(j = 2; j <= i/2; j++)
        {
            if(i%j == 0)
                sum += j;
        }
        if(sum == i)
            printf("\t%d", i);
    }
}
