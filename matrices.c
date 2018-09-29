/*
matriz


*/


#include<stdio.h>
#define TAM 5

int main(){
//defino matriz de enteros
         int matriz[TAM];
         int i;

//inicializar la matriz

 for(i=0; i<TAM; i++)
          matriz[i]=0;

//leer por teclado los elementos de la matriz

for(i=0; i<TAM; i++){
         printf("elemento %i: ", i);
         scanf("%i", &matriz[i]);
         }

//mostrar por pantalla el contenido

for(i=0; i<TAM; i++){
         printf("%i\n", matriz[i]);
         }







system("PAUSE");
}
