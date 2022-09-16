#include<stdio.h>
int main()
{
  int n;
  long S;
  S = 0;
  //i = 1;
  printf("\nNhap vào n: ");
  scanf("%d", &n);
 
  for(int i = 1; i <=n; i++)
    {
        S = S + i;
    }
  printf("\nTong 1 + 2 + ... + %d là: %ld ", n, S);
}
