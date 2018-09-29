/*como intercambiar el valor de 2 operaciones*/

#include<stdio.h>
void intercambia(int *a, int *b){
  int temp;
     
     temp=*a;
     *a=*b;
     *b=temp;
   

}










int main(){
    
    int a, b, c;
     c=0;
     
    printf("introduce a: ");
    scanf("%i", &a);
    printf("introduce b: ");
    scanf("%i", &b);
    
    
        intercambia(&a, &b);

printf("a es %i y b es %i\n", a, b);




system("PAUSE");
}
