#include <stdio.h>

int fun_ref (int *a, int *b) //Argumentos por referencia
{
   *a=4;
   *b=5;
   return *a+*b;
}

int fun_valor (int a, int b) //Argumentos por valor
{
   a=4;
   b=5;
   return a+b;
}
main()
{
   int a, b, res;
   a=1;
   b=2;
   
   res=fun_valor(a,b);
   printf("POR VALOR: A es %i y B es %i\n",a,b);

   res=fun_ref(&a,&b);
   printf("POR REFERENCIA: A es %i y B es %i\n",a,b);
   
   getchar();
}
