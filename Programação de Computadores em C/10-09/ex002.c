#include <stdio.h>

int fibo (int n)
{

if (n == 0)
   return 1;

if(n==1) 
  return 1;


return fibo(n-1) + fibo(n-2);   

};
int main ()
{

    for(int i = 0; i<10; i++)
    {
        printf("%i ", fibo(i));
    }

    return 0;
}